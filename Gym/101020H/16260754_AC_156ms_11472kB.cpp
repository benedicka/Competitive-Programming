#include<bits/stdc++.h>
using namespace std;
int t,n,m,finish,start,f,a,b;
long long cost[1210][1210],ans,c;
int mp[30];
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%d %d %d",&n,&m,&f);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j) cost[i][j] = 0;
				else cost[i][j] = 1e3+5;
			}
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d %lld",&a,&b,&c);
			cost[a][b] = min(cost[a][b],c);
			cost[b][a] = min(cost[b][a],c);
		}
		for(int i=1;i<=f;i++)
		{
			scanf("%d",&mp[i]);
		}
		mp[0] = 1;
		for(int k=1;k<=n;k++)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					cost[i][j] =min(cost[i][j],cost[i][k]+cost[k][j]);
				}
			}
		}
		sort(mp+1,mp+1+f);
		ans = LONG_LONG_MAX;
		long long tmp;
		do
		{
			tmp =0;
			for(int i=1;i<=f;i++)
			{
				//printf("%lld %lld ",mp[i-1],mp[i]);
				tmp+=(cost[mp[i-1]][mp[i]]);
			}
			//printf("\n");
			tmp+=(cost[mp[f]][n]);
			ans = min(ans,tmp);
		}while(next_permutation(mp+1,mp+1+f));
		printf("Case %d: %lld\n",tc,ans);
	}	
	return 0;
}