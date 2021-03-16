#include<bits/stdc++.h>
using namespace std;
long long t,a,b,m,ans;
long long pangkat(long long x, long long p , long long m)
{
	long long res = 1;
	x%=m;
	while(p)
	{
		if(p%2) res*=x;
		res%=m;
		x*=x;
		x%=m;
		p/=2;
	}
	return res;
}
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&a,&b,&m);
		ans = pangkat(a,b,m);
		printf("%lld\n",ans?ans:m);
	}
	return 0;
}