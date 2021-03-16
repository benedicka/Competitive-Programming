#include <stdio.h>
#include <math.h>


int main()
{
	double a,b,c;
	double ans;
	while(scanf("%lf %lf",&a,&b)!=EOF)
	{
		ans=1;
		c=0;
		if (a==b) printf("1\n");
		else 
		{
			if (a-b>b)
			{
				for (int i=0;i<b;i++)
				{
					
					c++;
				}
				for (int i=a;i>(a-b);i--)
				{
					ans=ans+log10((double)i);
				
				}
				for (int i=0;i<c;i++)
				{
					
					ans=ans-log10((double)(b-i));
				}
				printf("%.0lf\n",floor(ans));
			}
			else 
			{
				
				for (int i=a;i>b;i--)
				{
					ans=ans+log10((double)i);
				}
				for (int i=a-b;i>1;i--)
					{
						
						ans=ans-log10((double)i);
					}
				printf("%.0lf\n",floor(ans));





			}




		}




	}



	return 0;
}