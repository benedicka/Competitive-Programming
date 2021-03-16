#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
int main()
{
	double a,b,c,d;
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	double r,x;
	x = a/b;
	r = 1-(c/d)-x+(c/d)*x;
	printf("%lf\n",x/(1-r));
	return 0;
}