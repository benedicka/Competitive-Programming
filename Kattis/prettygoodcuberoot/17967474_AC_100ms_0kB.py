def main():
    while True:
        try:
            x=eval(raw_input())
        except EOFError:
            break
        l = 0
        i = 0
        r = x
        while(l<=r):
            m = l + (r-l)/2
            if(m*m*m > x):
                r = m-1
            else :
                l = m+1
        a = m
        b = m-1
        c = m+1
        if(abs (x-a*a*a) < abs(x-b*b*b) and abs(x-a*a*a) < abs(x-c*c*c)) : print a
        elif(abs(x-b*b*b) < abs(x-a*a*a) and abs(x-b*b*b )< abs(x-c*c*c)) : print b
        elif(abs(x-c*c*c) < abs(x-b*b*b) and abs(x-c*c*c) < abs(x-a*a*a)) : print c

main()

