#include<bits/stdc++.h>
using namespace std;
long long t,k,m,dp[20][110][110];
long long f(long long jum,long long l,long long r)
{
    if(l==r) return l;
    if(l>r || r<l) return 0;
    if(dp[jum][l][r]!=-1) return dp[jum][l][r];
    if(jum==1)
    {
        return dp[jum][l][r] = (r-l+1)*(l+r)/2;
    }
    long long ret=LONG_LONG_MAX;
    for(long long i=l+1;i<=r;i++)
    {
        ret = min(ret , i+max(f(jum-1,l,i-1),f(jum,i+1,r)));
    }
    //printf("%d %d %d %d\n",jum,l,r,ret);
    return dp[jum][l][r] = ret;
}
int main()
{
    scanf("%lld",&t);
    memset(dp,-1,sizeof(dp));
    printf("\n");
    while(t--)
    {
        scanf("%lld %lld",&k,&m);
        printf("%lld\n",f(k,1,m));
    }
    return 0;
}