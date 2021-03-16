def fast(x , p ,m):
    res = 1
    while(p>0):
        if(p%2): res*=x%m
        p/=2
        x*=x%m
    return res

def main():
    t = input()
    while(t>0):
        n = 0
        k = 0
        m = 0
        # n = input()
        # k = input()
        # m = input()
        inp = map(int,raw_input().split())
        ans = fast(inp[1],inp[0],inp[2])
        print(ans%inp[2])
        t-=1

main()
