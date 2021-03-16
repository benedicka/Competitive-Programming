#include<bits/stdc++.h>
using namespace std;
int a,b,parent[1010],n,m,k,x[1010],cnt,ans;
vector < int > adj[1010];
map < int , int > mp;
bool cmp(int a,int b)
{
	return mp[a]>mp[b];
}
int s(int n)
{
	return ((1+n)*n/2);
}
void dfs(int x,int g)
{
	int sz;
	parent[x] = g;
	sz = adj[x].size();
	for(int i=0;i<sz;i++)
	{
		if(parent[adj[x][i]]==0) dfs(adj[x][i],g);
	}
}
int main()
{
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&a,&b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=0;i<k;i++)
	{
		dfs(x[i],x[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(parent[i]==0) cnt++;
		else mp[parent[i]]++;
	}
	sort(x,x+k,cmp);
	for(int i=0;i<k;i++)
	{
		if(i==0)ans += s(cnt+mp[x[i]]-1);
		else ans += s(mp[x[i]]-1);
	}
	printf("%d\n",ans-m);
	return 0;
}