#include<bits/stdc++.h>
using namespace std;
int st,sink,n,jum,max_flow,a,b,c,residu[110][110];
vector < int > adj[110];
int parent[110];
int bfs(int s, int end)
{

    for(int i=1;i<=n;i++)
    {
    	parent[i] = 0;
	}
    parent[s] = s;
    queue< pair< int, int > > q;
    q.push(make_pair(s,INT_MAX));
    while (!q.empty())
	{
        int now = q.front().first;
        int flown = q.front().second;
        int sz = adj[now].size();
        q.pop();
        for (int next =0;next<sz;next++)
		{
            if (parent[adj[now][next]] == 0 && residu[now][adj[now][next]])
			{
                parent[adj[now][next]] = now;
                int new_flow = min(flown, residu[now][adj[now][next]]);
                if (adj[now][next] == end) return new_flow;
                q.push(make_pair(adj[now][next], new_flow));
            }
        }
    }
    return 0;
}
int maxflow(int s, int end)
{
    int flow = 0;
    int new_flow;
    while(new_flow = bfs(s,end))
	{
        flow+=new_flow;
        int cur = end;
        while (cur != s)
		{
            int prev = parent[cur];
            residu[prev][cur] -= new_flow;
            residu[cur][prev] += new_flow;
            cur = prev;
        }
    }
    return flow;
}
int main()
{
	int tc = 1;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		for(int i=1;i<=n;i++) 
		{
			adj[i].clear();
			for(int j=1;j<=n;j++)
			{
				residu[i][j] = 0;
			} 
		}
		scanf("%d %d %d",&st,&sink,&jum);
		for(int i=0;i<jum;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			adj[a].push_back(b);
			adj[b].push_back(a);
			residu[a][b]+=c;
			residu[b][a]+=c;
		}
		max_flow = maxflow(st,sink);
		printf("Network %d\n",tc++);
		printf("The bandwidth is %d.\n\n",max_flow);
	}
	return 0;
}