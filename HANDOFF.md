# AIMA Big Sur Sport 2.0: failed firmware flash

Continue this on the Windows machine, which can be plugged into the bike.

## Problem
The owner flashed `firmware/flashed/DXB67N-1330C-2001V0420F503.bin`. Afterwards BESST reads the HMI normally but gets no read access to the controller or battery. The goal is to undo the flash or understand why it fails.

Bike: Bafang 750W rear hub, 48V 20Ah 960Wh battery, TFT display.

## Waiting on the owner
1. With BESST unplugged, does the display turn on from the battery alone?
2. Battery output-terminal voltage, and do its button or LEDs respond?
3. Which BESST row was used for the flash (Controller or Battery 1), and did it reach 100%?
4. Where did the file come from? What battery and controller versions did BESST show before the flash?
5. Which BESST hardware do they have? Does the Windows machine see it?

## Next steps
1. Get those answers.
2. Check how the BESST box enumerates on Windows (USB VID/PID, serial or HID). Use BESST's own screens where needed.
3. If it exposes no raw data, consider a USB-CAN adapter on the bike's bus. Listen only. The CAN bitrate has not been derived yet (start at `FUN_0800c1f8`).
4. Do not transmit or flash anything without explicit owner approval.

## Do not
- Flash `SM Battery - Upgrade_FW_V1.2.4.5.bin`. It is for the Santa Monica 720Wh battery (`BT F440.D720.C`).
- Flash a controller file until the controller is known to have been hit.
- Leave the battery charging unattended until it reads normally. Its protections may not be working.

## Observed in the files
- All AIMA and flashed files checked: bytes 0x10-0x11 hold a CRC-16/XMODEM of the payload from 0x20, stored big-endian. This matched all 13 files checked, including ones no longer in this repo.
- Flashed file: 0x20 header, then a plaintext Cortex-M image linked at `0x08004800` (the literal `0x08004800` sits next to the VTOR address). Payload size 0x10C00.
- Trailer `ac 61 92 de` is the STM32-style CRC-32 of the payload minus its last 4 bytes, and it matches. The file is not corrupt.
- Strings: `BAFANG`, `D-POWER CORE`, `BT F401.D960.C`, `DXB67N-1330C-2001`, `FWB22BAFG01`.
- Default config (`FUN_08008adc`): 13 cells, 20000 mAh.
- Headers: flashed `01 42 84`; AIMA controller files `05 42 82`; AIMA Santa Monica battery `32 32 84`, with an encrypted-looking payload (entropy 8.00).
- CAN handler `FUN_080065c8`: index `0x4000` with data `01 42 04` writes `runInBoot` to RAM at `0x200000b0` (`FUN_0800deac`), then soft-resets.
- Startup (reset vector `0x080106b4`): HSE start (hangs forever if it never becomes ready), CPU test, RAM test, flash CRC, clock cross-check. Self-test failures loop on SYSRESETREQ. All of this runs before CAN init.
- The strings at `0x08003fe0` and `0x08003ff8` are in the bootloader area and are not in this file. The bootloader itself is not in this file.
- AFE: I2C, data-memory addresses `0x91xx-0x93xx`, subcommands `0x90`/`0x92`/`0x96`. If it stops answering, `FUN_0800a100` sets `0xe8` bit 1, and `FUN_0800a1ec` then stops driving GPIOB pin 2 through `FUN_0800dc28` (and calls `FUN_0800dc34` if a config bit is set). That pin controlling battery output is inferred, not confirmed.
- No board-vs-firmware compatibility check was found in the code reviewed. This review was not exhaustive.
- AIMA's download has no Big Sur Sport battery firmware. Its video table lists battery firmware only for the Santa Monica. See `docs/frames/`.

## Inferred, not proven
- It is battery firmware: `01 42 84` in the header lines up with the app's own `01 42 04` boot check, and `84` also appears on the one AIMA battery file.
- It fits this pack on paper (960Wh label, 13S, 20Ah). That does not prove it matches this BMS board.
- MCU is GD32F303-class: 60 IRQ vectors, RCC mask includes bit 27, stack top `0x2000a0c8`.
- AFE is TI BQ769x2-family, from the data-memory map and subcommand numbers, recalled rather than checked against a datasheet.
- A roughly 16 MHz crystal is expected: PLL setup and the 8/16/24 MHz constants in `FUN_080103dc`.
- Leading single-fault theory: the battery output is off, so the controller is unpowered and the HMI is fed by BESST. Question 1 tests this.
- A silent battery points to a startup failure, a stuck bootloader, or sleep. An AFE fault alone should still leave CAN answering.

## Unknown
- Which component actually received the flash, and whether it finished.
- Whether BESST or the bootloader checks the header target before writing.
- Whether the bootloader still accepts an update after a reset with a dead app.
- What a controller bootloader does if handed this image.
- The CAN bitrate, and the mapping of the `0x183xx` frames in `FUN_0800be64`.

## Repo layout
- `firmware/flashed/`: the flashed file.
- `firmware/vendor/Big Sur Sport/`: AIMA's controller files for this bike. `firmware/vendor/Santa Monica/`: AIMA's only battery file, kept to compare formats, never to flash.
- Check originals against `SHA256SUMS.txt`.
- `analysis/out/payload.c`: Ghidra 12.2 decompile of all 417 functions. Each starts with a header like `/* 080106b4 ...`.
- `analysis/fw/`: payload without its header, and BL seeds for the Ghidra script.
- `analysis/scripts/`: run from `analysis/` with `python -I`. `f.py <addr> ...` prints functions and resolves literal pools. `g.py <regex> [n]` greps by function. `crc.py` and `hdr.py` recheck the CRCs. `dis.py fw/payload.bin` writes a capstone disassembly to `fw/dis.txt` (needs capstone).
- `analysis/ghidra/DecompAll.java`: import `payload.bin` as raw with `-processor ARM:LE:32:Cortex -loader BinaryLoader -loader-baseAddr 0x08004800`. Windows Ghidra ships its own decompiler; the Mac build had to be compiled.
- `docs/frames/`: AIMA's firmware summary table and the BESST update screen, from its videos.
- Not in the repo: AIMA's instruction videos and Big Sur (non-Sport) files. Get them from AIMA's download if needed.
- `transcript/`: this session's transcript, if it was added for `claude --resume`.
