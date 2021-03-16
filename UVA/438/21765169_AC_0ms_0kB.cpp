#include<bits/stdc++.h>
using namespace std;
const double pi = acos(-1.0);
double a,b,c,d,e,f,A,B,C,D,X,Y,x,y;
double dist(double a1, double a2, double b1, double b2)
{
	return sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
}
int main()
{
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		A = (-2*a+2*c);
		B = (-2*b+2*d);
		C = (-2*c+2*e);
		D = (-2*d+2*f);
		X = c*c+d*d-a*a-b*b;
		Y = e*e+f*f-c*c-d*d;
		y = (C*X-Y*A)/(C*B-D*A);
		x = (X*D-Y*B)/(A*D-C*B);
		//printf("pusat = %lf %lf\n",x,y);
		printf("%.2lf\n",pi*2*dist(x,y,a,b));
	}
	return 0;
}