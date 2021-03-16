#include<bits/stdc++.h>
using namespace std;
double a[8],x,y;
int main()
{
	scanf("%lf %lf %lf",&a[1],&x,&y);
	a[2] = (10000*a[1])/(10000-((100-x)*(y)));
	a[3] = (100-x)*a[2]/100;
	a[4] = (100-x)*(100-y)*a[2]/10000;
	a[5] = a[4];
	for(int i=1;i<=5;i++)
	{
		if(i>1) printf(" ");
		printf("%.4lf",a[i]);
	}
	printf("\n");
	return 0;
}