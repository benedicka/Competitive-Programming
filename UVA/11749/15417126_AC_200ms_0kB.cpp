#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
int n,m,a,b,c,mx,parent[510],sz,ans;
vector < pair < int , int > > adj[510];
vector < pair < int , pair < int , int > > > list;
map < int , int > mp;
void reset()
{
	ans = -1;
	for(int i=0;i<=n;i++) parent[i] = i;
	list.clear();
	for(int i=0;i<=n;i++) adj[i].clear();
	mp.clear();
}
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
	else if(parent_a < parent_b)
	{
		parent[parent_b] = parent[parent_a];
	}
	else
	{
		parent[parent_a] = parent[parent_b];
	}
}

bool sameparent(int a,int b)
{
	if(findparent(a)==findparent(b)) return 1;
	else return 0;
}

int main()
{
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(n==0 && m==0) break;
		reset();
		for(int i=0;i<m;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			if(i==0 || c>mx)
			{
				list.clear();
				mx = c;
				list.push_back(make_pair (a , make_pair (b,c)));
			}
			else if(c==mx)
			{
				list.push_back(make_pair (a , make_pair (b,c)));
			}
		}
		sz = list.size();
		for(int i=0;i<sz;i++)
		{
			a = list[i].first;
			b = list[i].second.first;
			unionset(a,b);
		}
		//printf("list : ");
		for(int i=1;i<=n;i++)
		{
			mp[findparent(parent[i])]++;
			//printf("%d ",parent[i]);
		}
		for(int i=1;i<=n;i++)
		{
			ans = max(ans,mp[i]);
		}
		printf("%d\n",ans);
	}
	return 0;
}