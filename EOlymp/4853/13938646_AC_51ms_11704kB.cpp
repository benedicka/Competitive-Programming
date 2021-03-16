#include<stdio.h>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
long long n,m,visit[50010],a,b,start,finish,x,cost,size,ans,from,to,c;
priority_queue< pair < long long , pair < long long , long long> > >pq;
vector < long long >  jwb;
vector < long long > adj[50010];
int main()
{
	c = 0;
	ans = 1;
	scanf("%lld %lld",&n,&m);
	scanf("%lld %lld",&start,&finish);
	for(int i=0;i<=50000;i++)
	{
		visit[i] = 0;
	}
	visit[start] = start;
	while(m--)
	{
		scanf("%lld %lld",&a,&b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	pq.push(make_pair(0,make_pair(start,start)));
	while(!pq.empty())
	{
		from = pq.top().second.first;
		to = pq.top().second.second;
		if(visit[to]==0) visit[to] = from;
		cost = pq.top().first;
		size = adj[to].size();
		pq.pop();
		if(to==finish)
		{
			ans = cost;
			break;
		}
		for(int i=0;i<size;i++)
		{
			if(visit[adj[to][i]]==0)pq.push(make_pair(cost-1,make_pair(to,adj[to][i])));
		}
	}
	if(visit[finish]==0) printf("-1\n");
	else
	{
		ans = cost*-1;
		printf("%lld\n",ans);
		x = finish;
		for(int i=0;i<ans;i++)
		{
			jwb.push_back(visit[x]);
			x = visit[x];
		}
		c = jwb.size()-1;
		for(int i=c;i>=0;i--)
		{
			printf("%lld ",jwb[i]);
		}
		printf("%lld\n",finish);
	}
	return 0;
}