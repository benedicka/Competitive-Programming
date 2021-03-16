#include<bits/stdc++.h>
using namespace std;
double a,b,c,x,y,z;
int mx,cnt;
const double pi = acos(-1.0);
bool ok;
double degree(double a)
{
	return a*pi/180.0;
}
double radtodegree(double a)
{
	return  a*180/pi;
}
int main()
{
	while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF )
	{
		x = a;
		y = b;
		z = c;
		a*=a;
		b*=b;
		c*=c;
		if(2*(a*b+a*c+b*c)<=(a*a+b*b+c*c) || a<=0 || b<=0 ||c <=0) printf("-1.000\n");
		else printf("%.3lf\n",sqrt(2*(a*b+a*c+b*c)-(a*a+b*b+c*c))/3);
	}
	return 0;
}