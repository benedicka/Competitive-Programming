#include<bits/stdc++.h>
using namespace std;
double n,x[100010];
int t;
int main()
{
	for(int i=1;i<=100000;i++)
	{
		x[i] = x[i-1]+(1.0/(i*1.0));
	}
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%lf",&n);
		printf("Case %d: %.6lf\n",tc,n*x[(int)n]);
	}
	return 0;
}
