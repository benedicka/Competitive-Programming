#include<bits/stdc++.h>
using namespace std;
int n,a[100010][5],dp[100010][5];

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(int i=0;i<3;i++)
	{
		dp[1][i] = a[1][i];
	}
	for(int i=2;i<=n;i++)
	{
	//	printf("%d. ",i);
		for(int j=0;j<3;j++)
		{
			dp[i][j] = -1;
			for(int k=0;k<3;k++)
			{
			//	printf("%d %d : %d %d\n",i,j,dp[i-1][j]+a[i][k],a[i][k]);
				if(j!=k)
				{
					dp[i][j] = max(dp[i][j],dp[i-1][k]+a[i][j]);
				}
			}
			//printf("%d ",dp[i][j]);
		}
		//printf("\n");
	}
	printf("%d\n",max(dp[n][0],max(dp[n][1],dp[n][2])));
	return 0;
}