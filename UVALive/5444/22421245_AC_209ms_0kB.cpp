#include<bits/stdc++.h>
using namespace std;
int n,a,b,tc=1,x[1010],cnt;
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
			if(a!=b)adj[b].push_back(a);
		}
		while(scanf("%d %d",&a,&b)!=EOF)
		{
			if(!a && !b) break;
			map< int , int > visit;
			map< int , int > cost;
			int q[10010];
			int ans = 0,sz=1,now=0;
			q[now]=a;
			visit[a] = 1;
			while(now<sz)
			{
				int tmp = q[now],mx = adj[tmp].size();
				now++;
				for(int i=0;i<mx;i++)
				{
					if(!visit[adj[tmp][i]])
					{
						//	printf("%d->%d\n",x[bfs[now]],x[adjlist[bfs[now]][i]]);
						cost[adj[tmp][i]] = cost[tmp]+1;
						visit[adj[tmp][i]] = 1;
						q[sz++]=(adj[tmp][i]);	
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