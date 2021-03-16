#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	if(n<1) printf("0\n");
	else
	{
		n+=1;
		if(n%2==0) printf("%lld\n",n/2);
		else printf("%lld\n",n);
	}
	
	return 0;
}