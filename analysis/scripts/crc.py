import struct,zlib
d=open('../firmware/flashed/DXB67N-1330C-2001V0420F503.bin','rb').read()
p=d[0x20:]
def stm32(words,init=0xffffffff):
    c=init
    for w in words:
        c^=w
        for _ in range(32):
            c=((c<<1)^0x04C11DB7)&0xffffffff if c&0x80000000 else (c<<1)&0xffffffff
    return c
for nm,b in [('payload-4',p[:-4]),('file-4',d[:-4]),('payload',p)]:
    n=len(b)//4
    print(nm,n,hex(stm32(struct.unpack('<%dI'%n,b[:n*4]))), 'crc32',hex(zlib.crc32(b)))
print('tail',p[-4:].hex(),hex(struct.unpack('<I',p[-4:])[0]))
# literal for 0x80106ee/0x80106f4/f8
B=0x08004800
def lit(a): return struct.unpack('<I',p[a-B:a-B+4])[0]
for a in range(0x8010774,0x801078c,4): print(hex(a),hex(lit(a)))
