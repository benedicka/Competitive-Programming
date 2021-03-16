#include<bits/stdc++.h>
using namespace std;
int n,m,x,ans;
bool ada[10000010],visit[10000010];
void dfs(int node)
{
	if(visit[node]) return;
	visit[node] = 1;
	//printf("%d\n",node);
	if(ada[node]) dfs(((1<<n)-1)^node);
	for(int i=0;i<n;i++)
	{
		if(node&(1<<i))
		{
			dfs(node-(1<<i));
		}
	}
}
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&x);
		ada[x] = 1;
	}
	for(int i=0;i<(1<<n);i++)
	{
		if(visit[i]) continue;
		if(!ada[i]) continue;
	//	printf("%d :\n",i);
		dfs(i);
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}