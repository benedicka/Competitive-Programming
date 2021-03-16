#include<stdio.h>
#include<queue>
#include<utility>
using namespace std;
int parent[10010],n,m,x,y,v;
long long ans=0,c=0;
int findparent(int x)
{
	if(parent[x]==x) return x;
	else
	{
		parent[x] = findparent(parent[x]);
		return parent[x];
	}	
}

void unionset(int a,int b)
{
	int parent_a = findparent(a);
	int parent_b = findparent(b);
	if(parent_a==parent_b) return;
	else if(parent_a < parent_b) parent[parent_b] = parent[parent_a];
	else parent[parent_a] = parent[parent_b];
}

bool sameparent(int a,int b)
{
	findparent(a);
	findparent(b);
	if(parent[a]==parent[b]) return 1;
	else return 0;
}

int main()
{
	scanf("%d %d",&n,&m);
	priority_queue < pair < int, pair < int , int > > >pq;
	pair < int, pair  <int , int > > f;
	for(int i=0;i<=n;i++)
	{
		parent[i] = i;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d %d %d",&x,&y,&v);
		pq.push(make_pair(-1*v,make_pair(x,y)));
		
	}
	while(!pq.empty())
	{
		f= pq.top();
		if(!sameparent(f.second.first,f.second.second))
		{
			unionset(f.second.first,f.second.second);
			ans+=(-1*f.first);
			c++;
		}
		pq.pop();
		if(c==n) break;
	}
	printf("%lld\n",ans);
	
	return 0;
}