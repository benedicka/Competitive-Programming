#include<bits/stdc++.h>
using namespace std;
double f,x,area,h1,h2,l,md,mx1,mx2;
const double pi = acos(-1.0);
double degree(double a)
{
	return a*pi/180.0;
}
int main()
{
	while(scanf("%lf",&f)!=EOF)
	{
		printf("%.10lf\n",f*sin(degree(108))/sin(degree(63)));
	}	
	return 0;
}