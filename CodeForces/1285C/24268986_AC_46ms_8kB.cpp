#include<bits/stdc++.h>
using namespace std;
long long x,l,r,a,b;
int main()
{
	scanf("%lld",&x);
	a = b = 0;
	for(long long i=1;i*i<=x;i++)
	{
		if(x%i==0)
		{
			l = i;
			r = x/i;
			if(l*r/__gcd(l,r)==x)
			{
				if(max(l,r)<max(a,b) || a==0)
				{
					a = l;
					b = r;
				}
			}
		}
	}
	printf("%lld %lld\n",a,b);
	return 0;
}