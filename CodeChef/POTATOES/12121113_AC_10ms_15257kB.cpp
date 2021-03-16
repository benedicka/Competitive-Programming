#include <stdio.h>
#include <math.h>



int main()
{
	int t,x[1000],y[1000];
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
		scanf ("%d %d",&x[i],&y[i]);
		
	}
	int a,b[1000],c;
	
	
	for (int i=0;i<t;i++)
	{
		a=x[i]+y[i]+1;
		b[i]=0;
		do
		{
		
			c=0;
			for (int i=2;i<a;i++)
			{
				if (a%i==0)
				{
					c=1;
					break;
				}
			}
			a++;
			b[i]++;
		}while (c!=0);
	}
	for (int i=0;i<t;i++)
	{
		printf("%d",b[i]);
		if (i!=t-1) printf("\n");
	}
	return 0;
}