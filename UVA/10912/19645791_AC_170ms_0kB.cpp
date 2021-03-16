#include<bits/stdc++.h>
using namespace std;
long long n,m,dp[10010][10010],tc=1;
void solve(long long x,long long y,long long z)
{
	if(x==10000) return;
	for(int i=z+1;i<=26;i++)
	{
		dp[x+1][y+i]++;
		solve(x+1,y+i,i);
	}
	
}
int main()
{
	for(int i=1;i<=26;i++)
	{
		dp[1][i] = 1;
		solve(1,i,i);
	}
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{
		if(n==m && n==0) break;
		printf("Case %lld: %lld\n",tc++,dp[n][m]);
	}
	return 0;
}