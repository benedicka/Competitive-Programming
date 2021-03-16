#include<bits/stdc++.h>
using namespace std;
int n,a,b,tc=1,x[40],cnt;
map < int, vector < int > > adj;

int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		if(!n) break;
		adj.clear();
		cnt = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&a,&b);
			if(adj[a].size()==0) x[cnt++] = a;
			adj[a].push_back(b);
			if(adj[b].size()==0) x[cnt++] = b;
			adj[b].push_back(a);
		}
		while(scanf("%d %d",&a,&b)!=EOF)
		{
			if(!a && !b) break;
			map< int , int > visit;
			map< int , int > cost;
			queue < int > q;
			int ans = 0;
			q.push(a);
			visit[a] = 1;
			if(adj[a].size()==0)
			{
				printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",tc++,cnt,a,b);
				continue;
			}
			while(!q.empty())
			{
				int tmp = q.front(),mx = adj[tmp].size();
				q.pop();
				for(int i=0;i<mx;i++)
				{
					if(!visit[adj[tmp][i]])
					{
						//	printf("%d->%d\n",x[bfs[now]],x[adjlist[bfs[now]][i]]);
						cost[adj[tmp][i]] = cost[tmp]+1;
						visit[adj[tmp][i]] = 1;
						q.push(adj[tmp][i]);	
					}
				}
				
			}
			for(int i=0;i<cnt;i++)
			{
				if(!visit[x[i]] || cost[x[i]]>b) ans++;
			}
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",tc++,ans,a,b);
		}
	}
	
	return 0;
}