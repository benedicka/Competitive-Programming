#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
const double pi = acos(-1.0);
double ox,oy,ax,ay,bx,by,ans,sudut,c,lax,lbx,lay,lby,d;
int t;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
		lax = ox-ax;
		lay = oy-ay;
		lbx = ox-bx;
		lby = oy-by;
		d = lax*lax + lay*lay;
		c = (lax*lbx+lay*lby)/d;
		sudut = acos(c)*180/pi;
		ans = pi*(2*sqrt(d))*sudut/360;
		printf("Case %d: %lf\n",tc,ans);
	}
	return 0;
}