#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979323846
int main()
{
	double ans,r,h,s,l,kel,sudut;
	while(scanf("%lf %lf %lf",&r,&h,&s)!=EOF)
	{
		if(r==0 && h==0 && s==0) break;
		l = sqrt(h*h+r*r-2*r*h*r/h)*2;
		sudut = 360-(2*acos(r/h)*(180/pi));
		//printf("%llf\n",sudut);
		kel = 2*pi*r*(sudut/360);
		//printf("%llf\n",kel);
		ans = (kel+l)*(100+s)/100;
		printf("%.2lf\n",ans);
	}
	return 0;
}