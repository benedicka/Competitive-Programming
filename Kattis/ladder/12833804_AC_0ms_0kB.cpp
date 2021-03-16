#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main()
{
	double d,h,ans;
	scanf("%lf %lf",&h,&d);
	ans =ceil( h/sin (d*PI/180));
	printf("%.0lf\n",ans);
	
	
	
	return 0;
}