#include<algorithm>
#include<stdio.h>
#include<iostream>
#include<map>
#include<queue>
using namespace std;
int n,a,b,x[200010],parent,idx,child,now;
bool ok,visit[200010];
int mp[200010];
vector < int > adj[200002];
queue < int > q;
bool cmp(int a, int b)
{
	return mp[a]<mp[b];
}
int main()
{

	scanf("%d",&n);
	ok = 1;
	for(int i=0;i<n-1;i++)
	{
		scanf("%d %d",&a,&b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		mp[x[i]] = i;
	}
	q.push(1);
	while(!q.empty())
	{
		now = q.front();
		visit[now] = 1;
		if(now!=x[idx])
		{
		
			ok = 0;
			break;
		}
		idx++;
		q.pop();
		sort(adj[now].begin(),adj[now].end(),cmp);
		for(int i=0;i<adj[now].size();i++)
		{
			//printf("%d ",adj[now][i]);
			if(!visit[adj[now][i]])
			{
				q.push(adj[now][i]);
			}
		}
		//printf("\n");
	}
	if(ok) printf("Yes\n");
	else printf("No\n");
	return 0;
}