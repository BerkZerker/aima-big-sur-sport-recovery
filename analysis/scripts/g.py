import re,sys
src=open('out/payload.c').read()
parts=re.split(r'(?m)^(?=/\* [0-9a-f]{8} )',src)
pat=re.compile(sys.argv[1])
for x in parts:
    if not x.startswith('/* '):continue
    hits=[l.strip() for l in x.splitlines() if pat.search(l)]
    if hits:
        print(x[3:11],len(x.splitlines()),'lines')
        for h in hits[:int(sys.argv[2]) if len(sys.argv)>2 else 6]: print('   ',h[:110])
