#include<stdio.h>

int main()
{
	long long n,m,a,ans;
	scanf("%lld %lld %lld",&n,&m,&a);
	printf("%lld",(n/a +(n%a!=0))*(m/a +(m%a!=0)));
	return 0;
}