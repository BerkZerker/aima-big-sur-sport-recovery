import sys,struct,re,capstone as C
from collections import Counter
d=open(sys.argv[1],'rb').read()
BASE=0x08004800
vt=struct.unpack('<76I',d[:0x130])
names="SP Reset NMI HardFault MemManage BusFault UsageFault r r r r SVC DebugMon r PendSV SysTick".split()
print('non-default vectors:')
default=Counter(vt[16:]).most_common(1)[0][0]
print(' default',hex(default))
for i,v in enumerate(vt):
    if v and v!=default: print(' ',i, names[i] if i<16 else 'IRQ%d'%(i-16), hex(v))
md=C.Cs(C.CS_ARCH_ARM,C.CS_MODE_THUMB|C.CS_MODE_MCLASS)
md.skipdata=True
# literal words
periph=Counter()
for o in range(0,len(d)-3,4):
    w=struct.unpack('<I',d[o:o+4])[0]
    if 0x40000000<=w<0x40100000 or 0x42000000<=w<0x44000000 or 0xE0000000<=w<0xE0100000 or 0x50000000<=w<0x60000000 or 0x1FFF0000<=w<0x20000000:
        periph[w&0xfffffc00]+=1
print('periph literals by 1K block:')
for k,v in sorted(periph.items()): print(' ',hex(k),v)
with open('fw/dis.txt','w') as f:
    for i in md.disasm(d,BASE):
        f.write('%08x: %-12s %s %s\n'%(i.address,i.bytes.hex(),i.mnemonic,i.op_str))
