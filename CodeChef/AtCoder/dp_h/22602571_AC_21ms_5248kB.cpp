#include<bits/stdc++.h>
using namespace std;
char x[1010][1010];
int h,w,dp[1010][1010],md = 1e9 + 7;
int main()
{
	scanf("%d %d",&h,&w);
	for(int i=0;i<h;i++)
	{
		scanf("%s",&x[i]);
	}
	bool stp1=0,stp2=0;
	for(int i=0;i<h;i++)
	{
		if(x[i][0]=='#') stp1 = 1;
		if(x[0][i]=='#') stp2 = 1;
		if(!stp1)
		{
			dp[i][0] = 1;
		}
		if(!stp2)
		{
			dp[0][i] = 1;
		}
	}
	for(int i=1;i<h;i++)
	{
		for(int j=1;j<w;j++)
		{
			if(x[i][j]=='.')
			{
				dp[i][j] = dp[i-1][j]%md+dp[i][j-1]%md;
				dp[i][j]%=md;
			}
		}
	}
	printf("%d\n",dp[h-1][w-1]);
	return 0;
}