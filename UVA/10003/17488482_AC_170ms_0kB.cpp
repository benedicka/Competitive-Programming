#include<bits/stdc++.h>
using namespace std;
int len,n,c[60],ans,dp[60][60];
int cut(int l, int r)
{
	int x = 0;
	//printf("%d %d %d %d\n",l,r,c[l],c[r]);
	if(l==r || l>=r) return 0;
	if(dp[l][r]!=-1) return dp[l][r];
	for(int i=l+1;i<r;i++)
	{
		if(x==0) x = c[r]-c[l] + cut(l,i) + cut(i,r);
		else x = min(x, c[r]-c[l]  + cut(l,i) + cut(i,r));
	}
	return dp[l][r] = x;
}
int main()
{
	while(scanf("%d",&len)!=EOF)
	{
		if(len==0) break;
		for(int i=0;i<60;i++)
		{
			for(int j=0;j<60;j++)
			{
				dp[i][j] = -1;
			}
		}
		scanf("%d",&n);
		c[0] = 0;
		c[n+1] = len;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&c[i]);
		}
		printf("The minimum cutting is %d.\n",cut(0,n+1));
	}	
	return 0;
}