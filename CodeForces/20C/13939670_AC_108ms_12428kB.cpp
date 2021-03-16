#include<stdio.h>
#include<queue>
#include<vector>
#include<utility>
using namespace std;
long long n,m,a,b,cost,start=1,finish,visit[100010],from,to,size,x;
vector < pair < long long , long long > > adj[100010];
vector < long long >  ans;
priority_queue< pair < long long ,  pair <  long long , long long > > >pq;
int main()
{
	scanf("%lld %lld",&n,&m);
	x = finish = n;
	while(m--)
	{
		scanf("%lld %lld %lld",&a,&b,&cost);
		adj[a].push_back(make_pair(b,cost));
		adj[b].push_back(make_pair(a,cost));
	}
	pq.push(make_pair(0,make_pair(start,start)));
	while(!pq.empty())
	{
		cost = pq.top().first;
		from = pq.top().second.first;
		to   = pq.top().second.second;
		//printf("from = %lld to = %lld cost = %lld\n",from,to,cost);
		if(visit[to]==0) visit[to] = from;
		if(to==finish)
		{
			break;
		}
		size = adj[to].size();
		for(int i =0;i<size;i++)
		{
			if(visit[adj[to][i].first]==0) pq.push(make_pair(cost-adj[to][i].second,make_pair(to,adj[to][i].first)));
		}
		pq.pop();
	}
	if(visit[finish]==0) printf("-1\n");
	else
	{
		cost*=-1;
		while(x!=start)
		{
			ans.push_back(visit[x]);
			x = visit[x];
		}
		x = ans.size()-1;
		for(int i=x;i>=0;i--)
		{
			printf("%lld ",ans[i]);
		}
		printf("%lld\n",finish);
	}
	
	return 0;
}