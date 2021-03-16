#include<stdio.h>
#include<math.h>
int main()
{
	double p,ot,vt;
	int n,a;
	scanf("%d",&n);
	a= n;
	while(a--)
	{
		scanf("%lf",&p);
		ot+=p;
	}
	p = (double) ot/n;
	printf("%.12f",p);
	
	
	
	return 0;
}