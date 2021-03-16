#include<stdio.h>
#include <math.h>
int main()
{
	int t,a,x,y,b,c;
	do
	{
		scanf("%d",&t);
		if (t==0) break;
		a=ceil(sqrt(t));
		if(a%2!=0)
		{
			x=a;
			y=1;
			b=(a-1)*(a-1);
			c=t-b-1;
			while (c>0)
			{
				if (y<a)
				{
					while (c>0)
					{
						y++;
						c--;
						if (y== a) break;
					}
				}
				else 
				{
					c--;
					x--;
				}
			}
			printf("%d %d\n",x,y);
		}
		else
		{
		
			x=1;
			y=a;
			b=(a-1)*(a-1);
			c=t-b-1;
			while (c>0)
			{
				if (x<a)
				{
					while (c>0)
					{
						x++;
						c--;
						if (x== a) break;
					}
				}
				else 
				{
					c--;
					y--;
				}
			}
			printf("%d %d\n",x,y);
	}
	}while (t!=0);

	
	return 0;
}