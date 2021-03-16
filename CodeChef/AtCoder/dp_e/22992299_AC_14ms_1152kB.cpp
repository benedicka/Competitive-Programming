#include<bits/stdc++.h>
using namespace std;
long long n,w[1010],v[1010],dp[100010],mx,wm,jumw;

int main()
{
	cin>>n>>wm;
	
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>v[i];
		mx+=v[i];
		jumw+=w[i];
	}
	
	for(int j=0;j<=mx;j++)
	{
		dp[j]=jumw+10;
	}
	dp[0] = 0;
	for(int i=1;i<=n;i++)
	{
		for(int j=mx;j>=v[i];j--)
		{
			dp[j] = min(dp[j],dp[j-v[i]]+w[i]);
		}
	}
	for(int i=mx;i>=0;i--)
	{
		if(dp[i]<=wm)
		{
			cout<<i<<'\n';
			break;
		}
	}
	return 0;
}