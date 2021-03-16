l = input()
d = input()
x = input()
ans1 = -1
ans2 = -1
while(l<=d):
    tmp = l
    cnt = 0
    while(tmp!=0):
        cnt+=(tmp%10)
        tmp/=10
    if(cnt==x):
        if(ans1==-1): ans1 = l
        ans2 = l
    l+=1
print ans1
print ans2
