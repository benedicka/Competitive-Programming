#include<bits/stdc++.h>
using namespace std;
int n;
double t,tmax,s;
int main()
{
	scanf("%d %lf",&n,&s);
	while(n--)
	{
		scanf("%lf",&t);
		tmax = max(t,tmax);
	}
	printf("%.0lf\n",ceil(tmax*s/1000));
	return 0;
}