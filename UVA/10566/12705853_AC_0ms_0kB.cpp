#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>







int main()
{
	double x,y,c;
	double min,max,mid,cek,a;
	while (scanf("%lf %lf %lf",&x,&y,&c)!=EOF)
	{
		a=(double)1/c;
		min = 0;
		if (x>y) max = y;
		else max = x;
		for (int i=0;i<1000;i++)
		{
		
			mid = (min+max)/2;
			
			cek = 1/(sqrt(x*x-mid*mid))+1/sqrt((y*y-mid*mid));
		
			if (cek<a) 
			{
				min = mid;
				
			}
			else 
			{
				max = mid;
			
			}
		}
		printf("%.3lf\n",mid);
	}
	return 0; 
}