#include<bits/stdc++.h>
using namespace std;
int visit[1010];
bool visitE[1010][1010];
int n,m,ans,a,b,c,tc=1,cst[1010][1010];
vector < int > adj[1010];
void dfs(int x,int cnt)
{
	if(x==1) 
	{
		bool ok = 1;
		for(int i=1;i<=n;i++)
		{
			if(!visit[i])
			{
			//	printf("!visit = %d ",i);
				ok = 0;
				break;
			}
		}
	//	printf("A: %d %d\n",ok,cnt);
		if(ok) ans = min(ans,cnt);
	}
	visit[x]++;
	for(int i=0;i<adj[x].size();i++)
	{
		//printf("c: %d %d %d\n",x,adj[x][i],visitE[x][adj[x][i]]);
		if(!visitE[x][adj[x][i]])
		{
			//printf("%d->%d\n",x,adj[x][i]);
			visitE[x][adj[x][i]] = visitE[adj[x][i]][x] = 1;
			dfs(adj[x][i],cnt+cst[x][adj[x][i]]);
			visitE[x][adj[x][i]] = visitE[adj[x][i]][x] = 0;
		}
	}
	visit[x]--;
}
int main()
{
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(!n && !m) break;
		ans = INT_MAX;
		for(int i=1;i<=n;i++) 
		{
			adj[i].clear();
			visit[i] = 0;
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			visitE[a][b] = visitE[b][a] = 0;
			adj[a].push_back(b);
			adj[b].push_back(a);
			cst[a][b] = cst[b][a] = c;
		}
		dfs(1,0);
		if(ans!=INT_MAX) printf("The minimal cost for test case %d is %d.\n",tc++,ans);
		else printf("There is no reliable net possible for test case %d.\n",tc++);
	}
	return 0;
}