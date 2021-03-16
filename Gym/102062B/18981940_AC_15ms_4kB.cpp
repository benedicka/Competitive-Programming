#include<bits/stdc++.h>
using namespace std;
const double pi = acos(-1.0);
int t;
double m,d,v,ans,r;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%lf %lf",&m,&d);
		v = m/d;
		r = pow(3*v/(4*pi),(double)1/3);
		printf("Case %d: %.4lf\n",tc,4*pi*r*r);
	}
	return 0;
}