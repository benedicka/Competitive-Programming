#include<stdio.h>
long long gcd(long long x,long long y)
{
	if(y==0) return x;
	gcd(y,x%y);
}
int main()
{
	long long a,b;
	while(scanf("%lld %lld",&a,&b)!=EOF)
	{
		printf("%lld %lld\n",gcd(a,b),a*b/gcd(a,b));
	}
	return 0;	
}