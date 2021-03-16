#include<bits/stdc++.h>
using namespace std;
int a,b,parent[1010],n,m,k,x[1010],cnt,ans;
map < int , int > mp;
bool p[1010],done[1010];

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
bool cmp(int a,int b)
{
	return mp[findparent(a)]>mp[findparent(b)];
}
int s(int n)
{
	return ((1+n)*n/2);
}
int main()
{
	for(int i=0;i<=1000;i++)
	{
		parent[i] = i;
	}
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&x[i]);
		p[x[i]] = 1;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&a,&b);
		unionset(a,b);
		done[a] = 1;
		done[b] = 1;
	}
	for(int i=1;i<=n;i++)
	{
		bool ok=0;
		for(int j=0;j<k;j++)
		{
			if(findparent(x[j])==findparent(i))
			{
				mp[findparent(x[j])]++;
				ok = 1;
				break;
			}
		}
		if(!ok)
		{
			cnt++;
		}
	}
	sort(x,x+k,cmp);
	for(int i=0;i<k;i++)
	{
		if(i==0)ans += s(cnt+mp[findparent(x[i])]-1);
		else ans += s(mp[findparent(x[i])]-1);
	}
	printf("%d\n",ans-m);
	return 0;
}