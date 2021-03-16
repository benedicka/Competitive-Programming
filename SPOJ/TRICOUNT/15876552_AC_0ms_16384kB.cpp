#include<stdio.h>
long long a,t;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&a);
		if(a==1) printf("1\n");
		else
		{
			printf("%lld\n",a*(a+2)*(a*2+1)/8);
		}
	}
	return 0;
}