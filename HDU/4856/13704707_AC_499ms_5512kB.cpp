#include<stdio.h>
#include<utility>
#include<queue>
#include<algorithm>
using namespace std;
int memo[20][50000],n,m,adj[20][20],input[20][5],cost,c1,c2;
int m1[4]= {1,-1,0,0};
int m2[4]= {0,0,1,-1};
char x[20][20];
bool visit[20][20];
queue < pair < int ,pair < int , int > > > q;
void bfs(int s1,int s2,int f1,int f2,int a,int b){
	for(int i=0;i<n;i++)
	{
		for(int j =0;j<n;j++)
		{
			visit[i][j] = 0;
		}
	}
	adj[a][b] = 1e7;
	q.push(make_pair(0,make_pair(s1,s2)));
	visit[s1][s2] = 1;
	while(!q.empty())
	{
		cost = q.front().first;
		c1 = q.front().second.first;
		c2 = q.front().second.second;
		if(c1==f1 && c2==f2)
		{
			adj[a][b] = cost;
			break;
		}
		for(int i=0;i<4;i++)
		{
			if(c1+m1[i]>=0 && c1+m1[i]<n && c2+m2[i]>=0 && c2+m2[i]<n && x[c1+m1[i]][c2+m2[i]]=='.' && visit[c1+m1[i]][c2+m2[i]]==0 )
			{
				visit[c1+m1[i]][c2+m2[i]]=1;
				q.push(make_pair(cost+1,make_pair(c1+m1[i],c2+m2[i])));
			}
		}
		q.pop();
	}
	while(!q.empty())
	{
		q.pop();
	}
}
int dp(int curr,int mask)
{
//	printf("%d\n",mask);
	int res;
	if(mask==(1<<m)-1)
	{
		return 0;
	}		
	if(memo[curr][mask]!=-1)
	{	
		return (memo[curr][mask]);
	}
	res = 1e7;
	for(int i=0;i<m;i++)
	{
		if(mask&(1<<i))
		{
			continue;
		}

		else
		{
			
		//	printf("dp = %d  res = %d \n",dp(i,(mask|1<<i)),res);
			res = min(res,dp(i,(mask|(1<<i)))+adj[curr][i]);
		}
	}
	return memo[curr][mask] = res;
}

int main()
{
	bool ok;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		for(int i=0;i<20;i++)
		{
			for(int j=0;j<50000;j++)
			{
				memo[i][j] = -1;
			}
		}
			
		for(int i=0;i<n;i++)
		{
			scanf("%s",&x[i]);
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d %d %d",&input[i][0],&input[i][1],&input[i][2],&input[i][3]);
			
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(i!=j)
				{
					bfs(input[i][2]-1,input[i][3]-1,input[j][0]-1,input[j][1]-1,i,j);
				}
				else adj[i][j] = 0;
			}
		}
//		for(int i=0;i<m;i++)
//		{
//			for(int j=0;j<m;j++)
//			{
//				printf("%10d",adj[i][j]);
//			}
//			printf("\n");
//		}
		int ans=1e9;
		for(int i=0;i<m;i++)
		{
			ans = min(ans,dp(i,1<<i));
			//printf("%d\n\n",1<<i);
		//	printf("ans = %d\n",ans);
		}
		if(ans>=1e7) printf("-1\n");
		else printf("%d\n",ans);
	}
	return 0;
}