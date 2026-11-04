import sys,re,struct
src=open('out/payload.c').read()
p=open('fw/payload.bin','rb').read()
B=0x08004800
parts=re.split(r'(?m)^(?=/\* [0-9a-f]{8} )',src)
idx={x[3:11]:x for x in parts if x.startswith('/* ')}
def res(m):
    a=int(m.group(1),16)
    if B<=a<B+len(p)-3:
        v=struct.unpack('<I',p[a-B:a-B+4])[0]
        return 'L_%08x'%v
    return m.group(0)
for a in sys.argv[1:]:
    t=idx.get(a.lower().zfill(8))
    if not t: print('--- missing',a); continue
    t=re.sub(r'/\* WARNING: Globals.*?\*/\n\n?','',t)
    print(re.sub(r'DAT_([0-9a-f]{8})',res,t))
