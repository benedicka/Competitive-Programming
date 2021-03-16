#include<bits/stdc++.h>
using namespace std;
long long ans,t,n,m,c[30][30],k[30],tmp;
bool dp[50][210],ok;
int main()
{
	//freopen("output.txt","w",stdout);
	scanf("%lld",&t);
	for(int i=0;i<t;i++)
	{
		memset(dp,0,sizeof(dp));
		ans = ok = 0;
		scanf("%lld %lld",&m,&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&k[i]);
			for(int j=0;j<k[i];j++)
			{
				scanf("%lld",&c[i][j]);
			}
		}
		dp[0][0] = 1;
		for(int i=1;i<=n;i++)
		{
			for(int z=0;z<k[i];z++)
			{
				for(int j=0;j<=m;j++)
				{
					if(dp[i][j]) continue;
					tmp = j-c[i][z];
					//printf("%d %d %lld %lld\n",z,j,c[i][z],tmp);
					if(!(0<=tmp && tmp<=m)) continue;
					if(dp[i-1][tmp]) 
					{
						dp[i][j] = 1;
					//	printf("%d %d OK\n",i,j);
					}
				}
			}
		}
//		for(int i=1;i<=n;i++)
//		{
//			for(int j=0;j<=m;j++)
//			{
//				printf("%d ",dp[i][j]);
//			}
//			printf("\n");
//		}
		for(int i=m;i>0;i--)
		{
			if(dp[n][i])
			{
				ok = 1;
				printf("%d\n",i);
				break;
			}
		}
		if(!ok) printf("no solution\n");
	}	
	return 0;
}