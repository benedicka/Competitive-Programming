#include<iostream>
#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<climits>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
long long t,n,l,m,r,ans;

int main()
{
    scanf("%lld",&t);
    for(int tc=0;tc<t;tc++)
    {
        scanf("%lld",&n);
        l  = 1;
        r = 1e10;
        ans = 0;
        while(l<=r)
        {
            m = (l+r)/2;
            if(m*(m+1)/2<=n)
            {
                ans = max(ans,m);
                l = m+1;
            }
            else r = m-1;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
