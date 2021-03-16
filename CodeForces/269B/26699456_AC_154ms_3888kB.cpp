#include<bits/stdc++.h>
using namespace std;
long long n,m,type[5010],dp[5010],ans;
double tmp;
int main() {    
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n;i++) 
	{
		scanf("%lld %lf",&type[i],&tmp);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j>=0;j--)
		{
			if(type[j]<=type[i]) dp[i] = max(dp[i],dp[j]+1);
		}
	}
	for(int i=0;i<n;i++)
	{
		ans = max(ans, dp[i]);
	}
	printf("%lld\n", n-ans);
	return 0;
}
 