#include <bits/stdc++.h>
using namespace std;
long long t,n,x[22][22],dp[1048580];
long long f(int mask,int jum)
{
    if(jum>=n) return 1;
    if(dp[mask]!=-1) return dp[mask];
    long long tmp = 0;
    for(int i=0;i<n;i++)
    {
        if(x[jum][i] && !(mask&(1<<i)))
        {
            tmp+=f(mask|(1<<i),jum+1);
        }
    }
    return dp[mask]=tmp;
}
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%lld",&x[i][j]);
            }
        }
        memset(dp,-1,sizeof(dp));
        printf("%lld\n",f(0,0));
    }
    return 0;
}