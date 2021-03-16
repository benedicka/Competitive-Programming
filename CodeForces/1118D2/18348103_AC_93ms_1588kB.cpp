#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200010],sum,ans = 300000,l,r,mi;
bool check(long long i)
{
	sum = 0;
	for (int j=n-1;j>=0;j--)
	{
		sum+=max(a[j]-((n-1-j)/i), (long long)0);
	}
	return sum>=m; 
}
int main()
{
	scanf("%lld %lld",&n,&m);
	for (int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	l = 1;
	r = n;
	while(l<=r)
	{
		mi = (l+r)/2;
		if(check(mi))
		{
			r = mi-1;
			ans = min(ans,mi);
		}
		else l = mi+1;
	}
	printf("%lld\n",ans==300000?-1:ans);
	return 0;
}