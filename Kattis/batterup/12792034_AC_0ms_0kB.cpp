#include <stdio.h>
#include <math.h> 
int main()
{
	int n;
	double a,c=0,b=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf",&a);
		if(a>=0)
		{
			c++;
			b+=a;
		}
	}
	printf("%.17lf\n",b/c);
	
	
    return 0;
}
