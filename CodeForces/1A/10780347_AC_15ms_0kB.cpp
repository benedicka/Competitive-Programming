#include <stdio.h>
int main ()
{
	long n,m,a;
	scanf ("%ld %ld %ld",& n,&m ,&a);
	if (m%a==0 && n%a==0)
	{
		long long M=m/a;
		long long N=n/a;
		printf ("%lld", M*N);
	}
	else if (m==a && n==a)
	{
		printf ("1");
	}
	else if (m%a==0 &&n%a>=1)
	{
	long long	x=n/a+1;
	printf ("%lld",x*m/a);
	}	
	else if (n%a==0 && m%a>=1)
	{
	long long	y=m/a+1;
	printf ("%lld",n*y/a);
	}
	else
	{
		long long b= m/a+1;
		long long c= n/a+1;
		printf ("%lld",b*c);	
	}
	
	
	return 0;
}