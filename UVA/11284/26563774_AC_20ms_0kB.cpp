#include<bits/stdc++.h>
using namespace std;
int t,n,m,n1,x,y,store[15];
long long cost[55][55],cst,storeprice[15],dp[15][1<<15];
double tmp;
long long f(int mask,int now)
{
	if(mask==(1<<(n+1))-1)
	{
		return -1*cost[store[now]][0];
	}
	if(dp[now][mask]>LONG_LONG_MIN)
	{
	//	printf("%lld\n",dp[now][mask]);
		return dp[now][mask];
	} 
	long long res = -1*cost[0][store[now]],temp;
	for(int i=0;i<=n;i++)
	{
		if(!(mask&(1<<i)))
		{
			res = max(res,storeprice[i]-cost[store[now]][store[i]]+f(mask|(1<<i),i));
		}
	}
	return dp[now][mask] = res;
}

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n1,&m);
		for(int i=0;i<=n1;i++)
		{
			for(int j=0;j<=n1;j++)
			{
				cost[i][j] = (long long)1<<55;
			}
			cost[i][i] = 0;
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d %lf",&x,&y,&tmp);
			cst = (long long)round(tmp*100);
			cost[x][y] = cost[y][x] = min(cst,cost[x][y]);
		}
		
		for(int k=0;k<=n1;k++)
		{
			for(int i=0;i<=n1;i++)
			{
				for(int j=0;j<=n1;j++)
				{
					cost[i][j] = min(cost[i][j],cost[i][k]+cost[k][j]);
				}
			}
		}
//		for(int i=0;i<=n1;i++)
//		{
//			for(int j=0;j<=n1;j++)
//			{
//				printf("%lld ",cost[i][j]);
//			}
//			printf("\n");
//		}
		scanf("%d",&n);
		store[0] = storeprice[0] = 0;
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<1<<(n+1);j++)
			{
				dp[i][j] = LONG_LONG_MIN;
			}
		}
		
		for(int i=1;i<=n;i++)
		{
			scanf("%d %lf",&store[i],&tmp);
			
			storeprice[i] = (long long)round(tmp*100);
		//	printf("%d %lld\n",store[i],storeprice[i]);
		}
	//	printf("%lld\n",f(1,0));
		if(f(1,0)>0)printf("Daniel can save $%lld.%02lld\n",(long long)floor(f(1,0)/100),f(1,0)%100);
		else printf("Don't leave the house\n");
	}
	return 0;
}