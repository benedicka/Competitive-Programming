#include<stdio.h>
#include <math.h>
int main()
{
	long long ans,a,b,n;
	scanf("%lld",&n);
	ans = 0;
	while(n--)
	{
		scanf("%lld",&a);
		b = a%10;
		a = a/10;
		ans+=pow (a,b);
	}
	printf("%lld\n",ans);
	
	
	
	return 0;

}