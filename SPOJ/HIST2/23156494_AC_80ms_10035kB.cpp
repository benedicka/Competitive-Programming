#include<bits/stdc++.h>
using namespace std;
int n,x[20],dp[20][40000],ans;
long long cara[20][40000];
int f(int mask,int last)
{
    if(mask==(1<<n)-1)
    {
        cara[last][mask] = 1;
        return x[last];
    }
    if(dp[last][mask]!=-1) return dp[last][mask];
    int tmp = 0,cnt;
    for(int i=1;i<=n;i++)
    {
        if(!(mask&(1<<(i-1))))
        {
            cnt = abs(x[last]-x[i])+f(mask|(1<<(i-1)),i);
            if(cnt>tmp)
            {
                tmp = cnt;
                cara[last][mask] = cara[i][mask|(1<<(i-1))];
            }
            else if(cnt==tmp)
            {
                cara[last][mask] += cara[i][mask|(1<<(i-1))];
            }
        }
    }
    return dp[last][mask] = tmp;
}
int main()
{
    x[0] = 0;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0) break;
        for(int i=1;i<=n;i++)
        {
           scanf("%d",&x[i]);
        }
        memset(dp,-1,sizeof(dp));
        ans = f(0,0)+2*n;
        printf("%d %lld\n",ans,cara[0][0]);
    }
	return 0;
}