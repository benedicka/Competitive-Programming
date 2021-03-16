#include<bits/stdc++.h>
using namespace std;
const int N = 500,INF = INT_MAX;
struct edge{
	int a,b,c,f;
};
int V,src,sink,a,b,c;
int lv[N+10], idx[N+10];
vector <edge> e;
vector <int> g[N+10];
void add_edge(int a, int b, int c)
{
	edge ed;
	ed.a = a; ed.b = b; ed.c = c; ed.f = 0;
	g[a].push_back(e.size());
	e.push_back(ed);
	ed.a = b; ed.b = a; ed.c = 0; ed.f = 0;
	g[b].push_back(e.size());
	e.push_back(ed);
}
bool bfs()
{
	queue <int> q;
	for(int i=1;i<=V;++i) lv[i] = -1;
	
	lv[src] = 0;
	q.push(src);
	
	while(!q.empty())
	{
		int cur = q.front();
		q.pop();
		int sz = g[cur].size();
		for(int i=0;i<sz;++i)
		{
			int temp = g[cur][i];
			int to = e[temp].b;
			if(lv[to] != -1) continue;
			if(e[temp].c - e[temp].f > 0)
			{
				lv[to] = lv[cur]+1;
				q.push(to);
			}
		}
	}
	return lv[sink] != -1;
}
long long dfs(int cur, int flow)
{
	if(cur == sink) return flow;
	if(flow == 0) return 0;
	int sz = g[cur].size();
	for(int &i=idx[cur];i<sz;i++)
	{
		int temp = g[cur][i];
		if(e[temp].c > e[temp].f)
		{
			int to = e[temp].b;
			if(lv[to] == lv[cur]+1)
			{
				long long minn = dfs(to, min(flow, e[temp].c - e[temp].f));
				if(minn > 0)
				{
					e[temp].f += minn;
					e[temp ^ 1].f -= minn;
					return minn;
				}
			}
		}
	}
	return 0;
}
long long dinic()
{
	long long res=0;
	
	while(bfs())
	{
		for(int i=1;i<=V;++i) idx[i] = 0;
		
		while(true)
		{
			int temp = dfs(src,INF);
		//	printf("%d\n",temp);
			if(temp) res += temp;
			else break;
		}
	}
	return res;
}
void reset()
{
	e.clear();
	for(int i=0;i<=V;i++)
	{
		g[i].clear();
	}
	V =0;
}
int main()
{
	long long ans,t,n,m,a[110],b[110];
	scanf("%lld",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%lld",&n);
	
		for (int i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
			add_edge(1,i+1,1);
		}
		scanf("%lld",&m);
		for (int i=1;i<=m;i++)
		{
			scanf("%lld",&b[i]);
			add_edge(n+i+1,n+m+2,1);
		}
		V = n+m+2;
	//	printf("V = %d E = %d\n",V,E);
		src = 1;
		sink = n+m+2;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(a[i]==0 && b[j]==a[i])
				{
					add_edge(i+1,n+j+1,1);
				}
				else if(a[i]!=0 && b[j]%a[i]==0)
				{
					add_edge(i+1,n+j+1,1);
				}
			}
		}
	//	printf("V = %d E = %d\n",V,E);
		ans = dinic();
		printf("Case %d: %lld\n",tc,ans);
		reset();
	}
	return 0;
}