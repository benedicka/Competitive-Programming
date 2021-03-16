#include<bits/stdc++.h>
using namespace std;
string x;
int cnt,t,sum[15],tot,ans,memo[255][255][255];	
vector < int > dp[12];
void pre()
{
	dp[0].push_back(0);
	for(int i=1;i<=1023;i++)
	{
		int sz = 0;
		for(int j=0;j<=9;j++)
		{
			if(i&(1<<j)) sz++;
		}
		dp[sz].push_back(i);
	}
//	int tmp=0;
//	for(int i=0;i<dp[0].size();i++)
//	{
//		printf("%d\n",dp[0][i]);
//	}
//	for(int i=0;i<=10;i++)
//	{
//		tmp = max(tmp,(int)dp[i].size());
//		printf("%d. %d\n",i,dp[i].size());
//	}
//	printf("%d\n",tmp);
}
int main()
{
	pre();
	memset(memo,-1,sizeof(memo));
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		cnt = 0;
		for(int j=0;j<3;j++)
		{
			cin>>x;
			sum[j] = 0;
			for(int k=0;k<x.size();k++)
			{
				if(x[k]=='1') sum[j]++;
			}
			tot+=sum[j];
		}
//		printf("%d %d %d\n",sum[0],sum[1],sum[2]);
//		if(tot<=10)
//		{
//			for(int j=0;j<=9;j++)
//			{
//				if(tot>0) printf("1");
//				else printf("0");
//				tot--;
//			}
//			printf("\n");
//		}
//		else
//		{
			if(memo[sum[0]][sum[1]][sum[2]] == -1)
			{
				for(int j=0;j<dp[sum[0]].size();j++)
				{
					for(int k=0;k<dp[sum[1]].size();k++)
					{
						for(int l=0;l<dp[sum[2]].size();l++)
						{
							//printf("%d %d %d\n",dp[sum[0]][j],dp[sum[1]][k],dp[sum[2]][l]);
							memo[sum[0]][sum[1]][sum[2]] = max(memo[sum[0]][sum[1]][sum[2]],dp[sum[0]][j]^dp[sum[1]][k]^dp[sum[2]][l]);
						}
					}
				}
			}	
			//printf("%d\n",ans);
			for(int j=9;j>=0;j--)
			{
				if(memo[sum[0]][sum[1]][sum[2]]&(1<<j)) printf("1");
				else printf("0");
			}
			printf("\n");
//		}
	}
	return 0;
}