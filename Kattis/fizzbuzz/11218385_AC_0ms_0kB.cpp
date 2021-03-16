#include <stdio.h>
int main ()
{
	long a,b,c;
	scanf ("%ld %ld %ld",&a,&b,&c);
	for (long i=1;i<=c;i++)
	{
		if (i%a==0 && i%b==0)
		{
			printf ("fizzbuzz\n");
		}
		else if (i%a==0)
		{
			printf ("fizz\n");
		}
		else if (i%b==0)
		{
			printf ("buzz\n");
		}
		else 
		{
			printf("%ld\n",i);
		}
	}
	return 0;
}