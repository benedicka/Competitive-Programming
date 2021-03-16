#include<stdio.h>
#include<queue>
#include<utility>
using namespace std;
int parent[110];
int findparent(int a)
{
	if(parent[a]==a) return a;
	else
	{
		parent[a] = findparent(parent[a]);
		return parent[a];
	}
}
void unionset(int a, int b)
{
	int x = findparent(a);
	int y = findparent(b);
	if(x==y) return;
	else if(x<y) parent[y] = parent[x];
	else parent[x] = parent[y];
}
bool sameparent(int a,int b)
{
	if(findparent(a)==findparent(b)) return 1;
	else return 0;
}
int main()
{
	int t,ans,m,n,from,to,v;
	pair < int , pair < int , int > > f;
	priority_queue < pair < int , pair < int , int > > > pq;
	scanf("%d",&t);
	for(int tc = 1;tc<=t;tc++)
	{
		ans = -1;
		scanf("%d %d",&m,&n);
		for(int i=1;i<=m;i++)
		{
			parent[i] = i;
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d %d %d",&from,&to,&v);
			pq.push(make_pair(v,make_pair(from,to)));
		}
		while(!pq.empty())
		{
			f = pq.top();
			if(!sameparent(f.second.first,f.second.second))
			{
				unionset (f.second.first,f.second.second);
				if(ans==-1 || ans>f.first) ans = f.first;
			}
			pq.pop();
		}
		printf("Case #%d: %d\n",tc,ans);
	}
	
	return 0;
}