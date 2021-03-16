#include<stdio.h>
int n,m,a[2010],b[2010],dp[2010][2010],ans[2010],c;
int max(int a, int b)
{
	if(a>b) return a;
	else return b;
}
void lcs()
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0 || j==0) dp[i][j] = 0;
			else if(a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1]+1;
			else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
	}
//	for(int i=0;i<=n;i++)
//	{
//		for(int j=0;j<=m;j++)
//		{
//			printf("%3d ",dp[i][j]);
//		}
//		printf("\n");
//	}
}
int main()
{
	c = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	lcs();
	printf("%d\n",dp[n][m]);
	int i = n, j = m;
   	while (i >= 0 && j >= 0)
   	{
      	if(a[i-1] == b[j-1])
      	{
      		ans[c] = a[i-1];
      		//printf("ans[%d] = %d\n",c,a[i-1]);
          	if(c<dp[n][m])c++;
          	i--;
          	j--;
      	}
      	else if (dp[i-1][j] > dp[i][j-1]) i--;
      	else j--;
   	}
   //	c-=1;
   	for(int i=c-1;i>=0;i--)
   	{
   		printf("%d",ans[i]);
   		if(i!=0) printf(" ");
	}
 	printf("\n");
	return 0;
}