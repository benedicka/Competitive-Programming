#include<stdio.h>
#include<math.h>
int n;
double pusatx,pusaty,r,xbola,ybola,a1,a2,b1,b2,c1,c2;
double xk1,yk1,xk2,yk2;

bool dlmrange(double x , double y )
{
	double res;
	res = (x-pusatx)*(x-pusatx) + (y-pusaty)*(y-pusaty);
	if(res<=r*r) return 1;
	else return 0;
}
int main()
{
	xk1 = 52.5;
	yk1 = 3.66;
	xk2 = 52.5;
	yk2 = -3.66;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf %lf",&xbola,&ybola);
		scanf("%lf %lf %lf",&pusatx,&pusaty,&r);
		if(dlmrange(xbola,ybola))
		{
			printf("No goal...\n");
		}
		else
		{
			b1 = xk1 -xbola  ;
			a1 =  ybola -yk1;
			c1 = xbola*yk1 - xk1*ybola;
			
			b2 =  xk2 -xbola ;
			a2 =  ybola - yk2 ;
			c2 = xbola*yk2 - xk2*ybola;
			
		
			
			if(abs(a1*pusatx + b1*pusaty+c1)/(sqrt(a1*a1+b1*b1)) > r || abs(a2*pusatx + b2*pusaty+c2)/(sqrt(a2*a2+b2*b2)) > r) printf("Goal!\n");
			else printf("No goal...\n");
		}
	}
	
	return 0;
}