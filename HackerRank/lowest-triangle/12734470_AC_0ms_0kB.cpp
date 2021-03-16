#include <stdio.h>
#include <math.h>
int main ()
{
	double a,b,ans;
	scanf ("%lf %lf",& a,&b);
	ans = (2*b)/a;
	printf("%.0lf",ceil(ans));
	return 0;
}