#include<bits/stdc++.h>
using namespace std;
long long a[100010],parent[100010],n,x[100010],sum[100010],mx;
bool done[100010];
vector < long long > ans;
long long findparent(long long x)
{
	if(parent[x]==x) return x;
	else
	{
		parent[x] = findparent(parent[x]);
		return parent[x];
	}	
}

void unionset(long long a,long long b,int id)
{
	long long parent_a = findparent(a);
	long long parent_b = findparent(b);
	if(parent_a==parent_b) return;
	else if(parent_a < parent_b)
	{
		parent[parent_b] = parent[parent_a];
	}
	else 
	{
		parent[parent_a] = parent[parent_b];
	}
	sum[min(parent_a,parent_b)]+=sum[max(parent_a,parent_b)];
	mx = max(mx,sum[min(parent_a,parent_b)]);
}
int main()
{
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		parent[i] = i;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	ans.push_back(0);
	for(int i=n-1;i>0;i--)
	{
		sum[x[i]]+=a[x[i]];
		done[x[i]] = 1;
		mx = max(mx,sum[x[i]]);
		if(x[i]+1<=n && done[x[i]+1])unionset(x[i],x[i]+1,x[i]);
		if(x[i]-1>0 &&done[x[i]-1])unionset(x[i],x[i]-1,x[i]);
		ans.push_back(mx);
	}
	for(int i=n-1;i>=0;i--)
	{
		printf("%lld\n",ans[i]);
	}
	return 0;
}