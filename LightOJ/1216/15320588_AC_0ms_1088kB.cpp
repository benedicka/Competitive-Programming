#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
long t;
const double pi = acos(-1.0);
double ans,r1,r2,p,h,r,h1;
int main()
{
	scanf("%ld",&t);
	for(int tc = 1;tc<=t;tc++)
	{
		scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
		r = (r1-r2);
		h1 = p*r/h;
		r = r2+h1;
		ans = pi*p*(r*r+r*r2+r2*r2)/3;
		printf("Case %d: %.8lf\n",tc,ans);
	}
	return 0;
}