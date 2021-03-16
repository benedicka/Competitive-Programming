#include<stdio.h>
#include<math.h>
#define pi 3.14159265359
using namespace std;
int t;
double a,b,d,r,s;
int main()
{
	double x1,y1,x2,y2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf %lf",&a,&b,&d);
		r = d/2;
		s = sqrt(r*r+r*r);
		printf("%.6lf\n",pi*((s*s)/2-r*r)+s*s);
	}
	return 0;
}