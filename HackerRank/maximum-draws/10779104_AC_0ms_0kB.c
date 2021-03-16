#include <stdio.h>
int main ()
{
	long t,i;
	scanf ("%ld",&t);
	while (t--)
	{
		scanf ("%ld",&i);
		printf ("%ld \n", i+1);
	}
	return 0;
}