#include<stdio.h>
#include<algorithm>
#include<math.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
	double d,v;
	while(scanf("%lf %lf",&d,&v)!=EOF)
	{
		if(d==0 && v==0) break;
		double t,r;
		t = d;
		r = d/2;
		double vol1 = pi*r*r*t;
		double vol2 = vol1 - 1.5*v;
		
		float ans = cbrt(4*vol2/pi);
		printf("%.3lf\n",ans);
	}
	
	
	
	
	return 0;
}