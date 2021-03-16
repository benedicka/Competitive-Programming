#include<stdio.h>
#include<queue>
#include<vector>
#include<utility>
using namespace std;

int main()
{
	int t,v,k,a,b,c,x,y,size,ans;
	priority_queue < pair < int , pair < int , int > > > pq;
	vector < pair < int , int  > > adj[10010];
	long long min[10010];
	scanf("%d",&t);
	while(t--)
	{
		ans = -1;
		scanf("%d %d",&v,&k);
		for(int i=0;i<=v;i++)
		{
			adj[i].clear();
			min[i]=-1;
		}
		for(int i=0;i<k;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			adj[a].push_back(make_pair(b,c));
		}
		scanf("%d %d",&x,&y);
		pq.push(make_pair(0,make_pair(x,x)));
		min[x] = 0;
		while(!pq.empty())
		{
			int from,to,w;
			w = pq.top().first*-1;
			from = pq.top().second.first;
			to = pq.top().second.second;
		
			size = (int)adj[from].size();
			for(int i=0;i<size;i++)
			{
				if(min[ adj[from][i].first ]==-1 || min[adj[from][i].first]>w+(adj[from][i].second))
				{
					//puts("a");
					pq.push(make_pair((w+adj[from][i].second)*-1,make_pair(adj[from][i].first,from)));
					min[adj[from][i].first] = w+adj[from][i].second;
				}
			}
			pq.pop();
		}
		if(min[y]==-1) printf("NO");
		else	printf("%lld",min[y]);
printf("\n");
	}
	
	
	return 0;
}