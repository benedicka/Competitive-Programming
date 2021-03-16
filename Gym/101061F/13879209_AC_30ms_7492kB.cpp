#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int n,t,ans,dp[101][10001],a[101],sum;
int f(int idx , int diff)
{
	if(idx==n) return 0;
	if(dp[idx][diff]!=-1) return dp[idx][diff];
	int d,s;
	d = max(f(idx+1,diff+a[idx]),diff);
	s = max(f(idx+1,abs(diff-a[idx])) ,diff);
	return dp[idx][diff] = min(d,s);
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	
			sum+=(a[i]);
		}	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<sum;j++)
			{
				dp[i][j] = -1;
			}
		}
		f(0,0);
		printf("%d\n",dp[0][0]);
	}	
	
	
	
	return 0;
}