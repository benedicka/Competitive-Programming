#include<bits/stdc++.h>
using namespace std;
long long n,a[410],dp[410][410],pref[410];
long long f(long long l,long long r)
{
//	printf("%lld %lld\n",l,r);
	if(r<=l || l>=r) return 0;
	if(dp[l][r]!=-1) return dp[l][r];
	for(long long i=l;i<r;i++)
	{
	//	printf("c = %lld %lld %lld\n",i,i+1,a[i]+a[i+1]);
		if(dp[l][r]==-1)dp[l][r] = f(l,i)+f(i+1,r); 
		else dp[l][r] = min(dp[l][r],f(l,i)+f(i+1,r));
	}
	return dp[l][r]+=pref[r]-pref[l-1];
}
int main()
{
	scanf("%lld",&n);
	memset(dp,-1,sizeof(dp));
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		pref[i] = pref[i-1]+a[i];
	}	
	printf("%lld\n",f(1,n));
//	printf("c : \n");
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=i+1;j<=n;j++)
//		{
//			printf("%d %d %lld\n",i,j,dp[i][j]);
//		}
//	}
	return 0;
}