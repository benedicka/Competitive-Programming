#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
double n,a,b,area;
int main()
{	
	scanf("%lf %lf %lf",&n,&a,&b);
	area = n*a*b*sin((360/(2*n))*pi/180);
	printf("%lf\n",area);
	return 0;
}