#include<bits/stdc++.h>
using namespace std;
long long parent[100010];

long long findparent(long long x)
{
	if(parent[x]==x) return x;
	return parent[x] = findparent(parent[x]);
}
void unionset(long long a, long long b)
{
	long long x,y;
	x = findparent(a);
	y = findparent(b);
	if(x==y) return;
	else if(x<y) parent[y] = parent[x];
	else parent[x] = parent[y];
}
int main()
{
	long long t,n,m,q,a,b;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&n,&m,&q);
		for(int i=0;i<=n;i++)
		{
			parent[i] = i;
		}
		while(m--)
		{
			scanf("%lld %lld",&a,&b);
			unionset(a,b);
		}
		while(q--)
		{
			scanf("%lld %lld",&a,&b);
			printf("%d",findparent(a)==findparent(b)?1:0);
		}
		printf("\n");
	}
	return 0;
}