import sys,struct,glob,math,collections,os
files=[ '../firmware/flashed/DXB67N-1330C-2001V0420F503.bin']+sorted(glob.glob('../firmware/vendor/*/*.bin'))
def crc16(b,poly,init,ref,xorout=0):
    c=init
    if ref:
        for x in b:
            c^=x
            for _ in range(8): c=(c>>1)^poly if c&1 else c>>1
    else:
        for x in b:
            c^=x<<8
            for _ in range(8): c=((c<<1)^poly)&0xffff if c&0x8000 else (c<<1)&0xffff
    return c^xorout
V=[('modbus',0xA001,0xffff,True),('arc',0xA001,0,True),('ccitt-false',0x1021,0xffff,False),('xmodem',0x1021,0,False),('kermit',0x8408,0,True),('x25',0x8408,0xffff,True)]
for f in files:
    d=open(f,'rb').read(); tag=d[0x10:0x12]
    p=d[0x20:]
    H=-sum(c/len(p)*math.log2(c/len(p)) for c in collections.Counter(p).values())
    res=[]
    for n,poly,i,r in V:
        for rn,b in (('p',p),('f',d[:0x10]+d[0x12:])):
            c=crc16(b,poly,i,r)
            if c.to_bytes(2,'little')==tag or c.to_bytes(2,'big')==tag: res.append(n+rn)
    s=sum(p)&0xffff
    print(os.path.basename(f)[:48].ljust(48),'tag',tag.hex(),'entropy %.2f'%H,'crcmatch',res,'sum16',hex(s))
