#include<stdio.h>
int main()
{
	long a,ans,c;
	scanf("%ld",&a);
	ans = 1;
	c = 0;
	while (ans<a)
	{
		ans*=2;
	}
	while (ans>=1)
	{
		c++;
		ans/=2;
	}
	printf("%ld",c);
	return 0;
}