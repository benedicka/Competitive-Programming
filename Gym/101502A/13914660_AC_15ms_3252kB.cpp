#include<stdio.h>

int main()
{
	long long t,x,y;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&x,&y);
		printf("%lld\n",(x*100)/(100+y));
	}
	
	return 0;
}