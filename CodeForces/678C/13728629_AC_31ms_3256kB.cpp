#include<stdio.h>
long long n, a, b, p, q,ans;
long long gcd(long long x , long long y)
{
	if(y==0) return x;
	return gcd(y,x%y);
}
long long lcm (long long x , long long y)
{
	return (x*y/(gcd(x,y)));
}

int main()
{
	scanf("%lld %lld %lld %lld %lld",&n,&a,&b,&p,&q);
	ans =((n/a)-(n/lcm(a,b)))*p + ((n/b)-(n/lcm(a,b)))*q + (n/lcm(a,b))*(p>q?p:q);
	printf("%lld\n",ans); 
	return 0;
}