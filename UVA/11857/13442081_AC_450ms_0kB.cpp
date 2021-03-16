#include<stdio.h>
#include<queue>
using namespace std;
int parent[200010];

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
	priority_queue < pair < int , pair < int , int > > > pq;
	pair < int , pair < int , int > > f;
	int from,to,w,m,n,c;
	long long ans;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		c = 0;
		ans = 0;
		if(m==0 && n==0) break;
		for(int i=0;i<m;i++)
		{
			parent[i] = i;
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d %d %d",&from,&to,&w);
			pq.push(make_pair(-1*w,make_pair(from,to)));
		}
	
		while(!pq.empty())
		{
			f = pq.top();
	
			if(!sameparent(f.second.first,f.second.second))
			{
				unionset(f.second.first,f.second.second);
				if(-1*f.first>ans) ans =-1*f.first;
				c++;
			}
			pq.pop();
		}
		if(c<m-1) printf("IMPOSSIBLE\n");
		else printf("%lld\n",ans);
	}
	return 0;
}