#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int t,n,x[110],dp[110][50010],sum,ans;
int f(int idx , int diff)
{
	if(idx==n) return dp[idx][diff] = diff;
	if(dp[idx][diff]!=-1) return dp[idx][diff];
	int d,s;
	d = f(idx+1,diff+x[idx]);
	s = f(idx+1,abs(diff-x[idx]));
	//printf("%d %d\n",d,s);
	return dp[idx][diff] = min(d,s);
}

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ans = -1;
		sum = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
			sum+=x[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=sum;j++)
			{
				dp[i][j] = -1;
			}
		}
		f(0,0);
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<=sum;j++)
//			{
//				printf("%d ",dp[i][j]);
//			}
//			printf("\n");
//		}
		printf("%d\n",dp[0][0]);
	}
	return 0;
}