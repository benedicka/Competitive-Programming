#include<bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int jo(int n, int k) 
{ 
	if(dp[n][k]!=0) return dp[n][k];
  	if (n == 1)	
  	{
	 	return 1; 
	}
  	else
	{
	  	return dp[n][k] = (jo(n - 1, k) + k-1) % n + 1;
	} 
} 
int main() 
{ 
	int t,n,m,k,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&n,&m,&k);
		ans = ((jo(n, k))+m)%n;
		if(ans==0) ans = n;
	  	printf("%d\n", ans); 
	}
  	return 0; 
} 