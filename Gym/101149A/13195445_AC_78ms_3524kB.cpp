#include<stdio.h>
int main()
{
	long long n,a,max = 0;
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld",&a);
		if(a>max) max = a;
	}
	printf("%lld\n",max);
	
	
	
	return 0;
}