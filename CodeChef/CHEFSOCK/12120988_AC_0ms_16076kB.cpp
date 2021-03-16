#include <stdio.h>
#include <math.h>



int main()
{
	long long jc,sc,m;
	scanf ("%lld %lld %lld",&jc,&sc,&m);
	if (((m-jc)/sc)%2!=0) printf("Unlucky Chef");
	else printf("Lucky Chef");
	
	
	return 0;
}