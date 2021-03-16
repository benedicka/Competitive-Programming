#include<stdio.h>
long long size[3010],cost[3010],n,ans,tmp[3010];
bool ok;
long long min(long long a, long long b)
{
	if(a<b) return a;
	else return b;
}

int main()
{
	scanf("%lld",&n);
	ok = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&size[i]);
		tmp[i] = 4e8;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&cost[i]);
	}
	ans = 4e8;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(size[i]<size[j]) tmp[j] = min(tmp[j],cost[i]+cost[j]);  
		}
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(size[i]<size[j]) ans = min(ans,tmp[i]+cost[j]);  
		}
	}
	if(ans>= 4e8) printf("-1\n");
	else printf("%lld\n",ans);
	return 0;
}