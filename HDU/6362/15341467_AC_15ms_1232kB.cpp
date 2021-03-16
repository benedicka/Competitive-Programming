#include<stdio.h>
#include<vector>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
int t;
double a,b,x,y,area,pi = acos(-1.0),ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf",&a,&b);
		printf("%.6lf\n", pi*a+2*b-0.0000005);
	}
	return 0;
}