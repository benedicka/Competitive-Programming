#include<stdio.h>
#include<vector>
using namespace std;
int parent[30010];
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
	int n,m,q,s1,s2,ans;
	parent[0] = 0;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(n==0 && m==0) break;
		ans = 1;
		for(int i=1;i<n;i++)
		{
			parent[i] = i;
		}
		while(m--)
		{
			scanf("%d",&q);
			s2 = -1;
			while(q--)
			{
				scanf("%d",&s1);
				if(s2!=-1)unionset(s1,s2);
				s2 = s1;
			}
		}
		for(int i=1;i<n;i++)
		{
			if(sameparent(0,i)) ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}