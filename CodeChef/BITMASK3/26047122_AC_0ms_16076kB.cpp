#include<bits/stdc++.h>
using namespace std;
long long t,n,ans,l,m,r;
bool f(long long x)
{
	if(x*(1+x)/2 >= n) return 1;
	return 0;
}
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		l = 1;
		r = ans = (long long) 1e8;
		while(l<=r)
		{
			m = (l+r)/2;
			if(f(m))
			{
				r = m-1;
				ans = min(ans,m);	
			} 
			else l = m+1;
		}
		printf("%lld\n",ans);
	}
	return 0;
}