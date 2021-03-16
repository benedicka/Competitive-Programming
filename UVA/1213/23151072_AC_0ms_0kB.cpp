#include <bits/stdc++.h>
using namespace std;
int primelist[10010],dp[20][1200],cnt,n,k;
int mx = 2000;
bool prime[2000];
void sieve()
{
    for(int i=2;i*i<=mx;i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=mx;j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    for(int i=2;i<=mx;i++)
    {
        if(!prime[i]) primelist[cnt++] = i;
    }
}
int main()
{
    sieve();
    dp[0][0] = 1;
    for(int i=0;i<cnt;i++)
    {
        for(int j=1120;j>=primelist[i];j--)
        {
            for(int k=1;k<15;k++)
            {
                dp[k][j] += dp[k-1][j-primelist[i]];
            }
        }
    }
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        if(!n && !k) break;
        printf("%d\n",dp[k][n]);
    }
   return 0;
}