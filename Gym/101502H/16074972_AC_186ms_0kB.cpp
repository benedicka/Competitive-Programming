#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,d;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		if(b*log10(a)>d*log10(c)) printf(">\n");
		else printf("<\n");
	}
	return 0;	
}