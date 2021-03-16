#include<bits/stdc++.h>
using namespace std;
long long n,l,r,m,x[500010],ans;
bool ok(long long a)
{
	for(int i=0;i<n;i++)
	{
		a+=x[i];
		if(a<0) return 0;
	}
	return 1;
}
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	r = ans = 500000000000000;
	l = 0;
	while(l<=r)
	{
		m = (l+r)/2;
		if(ok(m))
		{
			ans = min(ans,m);
			r = m-1;
		}
		else l = m+1;
	}
	printf("%lld\n",ans);
	return 0;
}