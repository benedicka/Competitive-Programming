#include<bits/stdc++.h>
using namespace std;
double a,b,x[500010],ans;
int n;

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lf %lf",&a,&b);
		x[i] = a*b;
	}
	sort(x,x+n);
	for(int i=0;i<n;i++)
	{
		ans+=(x[i]*(n-i));
	}
	printf("%lf\n",ans/n);
	return 0;
}