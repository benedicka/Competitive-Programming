#include<stdio.h>
#include<queue>
using namespace std;
int parent[30010];
int ans;
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
bool sameparent(int a , int b)
{
	if(findparent(a)==findparent(b)) return 1;
	else return 0;
}
int main()
{
	int t,n,m,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d %d",&n,&m);
		for(int i=1;i<=n;i++)
		{
			parent[i] = i;
		}
		for(int i=1;i<=m;i++)
		{
			scanf("%d %d",&a,&b);
			unionset(a,b);
		}
		for (int i=1;i<=n;i++)
		{
			c = 0;
			for(int j=1;j<=n;j++)
			{
				if(i!=j && sameparent(i,j)) c++;
			}
			if(c>ans) ans = c;
		}
		printf("%d\n",ans+1);
	}
	
	
	return 0;
}