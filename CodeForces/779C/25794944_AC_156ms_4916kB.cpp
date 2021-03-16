#include<bits/stdc++.h>
using namespace std;
long long n,k,a[200010],b[200010],ans,sorted[200010],cnt;
bool beli[200010];
bool cmp(long long x,long long y)
{
	return (b[x]-a[x])>(b[y]-a[y]);
}
int main()
{
	scanf("%lld %lld",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		sorted[i] = i;
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&b[i]);
		if(a[i]<b[i])
		{
			cnt++;
			ans+=a[i];
			beli[i] = 1;
		}
	}	
	sort(sorted,sorted+n,cmp);
	for(int i=0;i<n;i++)
	{
		if(!beli[sorted[i]])
		{
			if(cnt>=k) break;
			ans+=a[sorted[i]];
			beli[sorted[i]] = 1;
			cnt++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(!beli[i])ans+=b[i];
	}
	printf("%lld\n",ans);
	return 0;
}