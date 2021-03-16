 #include <string>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <map>
#include <queue>
#include <math.h>
#include <climits>
using namespace std;
long long t,x,y,step,ans,l,r,m;
bool cek(long long n)
{
    if(n%2==0)
    {
        n/=2;
        return (n*(n+1))>=(y-x);
    }
    else
    {
        n/=2;
        return (n*(n+1) + n+1)>=(y-x);
    }
}
int main()
{
    
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&x,&y);
        r =  y-x;
        l = 0;
        ans = r;
        while(l<=r)
        {
            m = (l+r)/2;
            //printf("%lld %lld %lld\n",l,m,r);
            if(cek(m))
            {
                ans = min(ans,m);
                r = m-1;
            }
            else l = m+1;
        }
        printf("%lld\n",ans);
    }
    //getchar();
    return 0;
}

