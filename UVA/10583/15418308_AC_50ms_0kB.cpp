#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
int n,m,a,b,c,mx,parent[50010],sz,ans,tc=1;
vector < pair < int , int > > adj[50010];
map < int , bool > mp;
void reset()
{
	ans = 0;
	for(int i=0;i<=n;i++) parent[i] = i;
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
			scanf("%d %d",&a,&b);
			unionset(a,b);
		}
		for(int i=1;i<=n;i++)
		{
			if(!mp[findparent(i)])
			{
				mp[parent[i]] = 1;
				ans++;
			}
		}
		printf("Case %d: %d\n",tc++,ans);
	}
	return 0;
}