#include<bits/stdc++.h>
using namespace std;
double n,r,ans;
const double pi = acos(-1.0);
int main()
{
	while(scanf("%lf %lf",&r,&n)!=EOF)
	{
		ans = r*r*sin(360*pi/(180.0*n))*n/2;
		printf("%.3lf\n",ans);
	}
	return 0;
}