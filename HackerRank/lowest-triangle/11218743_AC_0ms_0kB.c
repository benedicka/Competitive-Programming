#include <stdio.h>
int main ()
{
	long a,b,h;
	
	scanf ("%ld %ld",&b,&a);
	h=a*2/b;
	if (a%b==0) printf ("%ld",h);
	else printf ("%ld",h+1);
	
	return 0;
}