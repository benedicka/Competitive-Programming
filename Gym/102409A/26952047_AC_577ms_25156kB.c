t = int(raw_input())
while(t>0):
    a,b,c = (raw_input()).split()
    t = t-1
    sums = int(a) + int(b)
    c = int(c)
    hasil = sums//c
    sisa = sums%c
    ans = str(hasil)+'.'
    for i in range(50):
        tmp = sisa*10
        hasil = tmp//c
        ans+=str(hasil)
        sisa = tmp%c
    print(ans)
