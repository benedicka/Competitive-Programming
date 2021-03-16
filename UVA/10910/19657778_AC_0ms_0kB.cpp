#include<bits/stdc++.h>
using namespace std;
int n,t,p,tc,dp[110][110],tmp;

int main()
{
	for(int i=0;i<=70;i++)
	{
		dp[1][i] = dp[0][i] = 1;
	}
	for(int i=2;i<=70;i++)
	{
		for(int j=70;j>=0;j--)
		{
			for(int k=0;k<=70;k++)
			{
				if(j-k>=0)dp[i][j]+=dp[i-1][j-k];
				else break;
			}
		}
	}
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d %d",&n,&t,&p);
		tmp = t-n*p;
		if(tmp<0) printf("0\n");
		else printf("%d\n",dp[n][tmp]);
	}	
	return 0;
}