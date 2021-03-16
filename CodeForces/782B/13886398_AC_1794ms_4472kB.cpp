#include<stdio.h>
#include<algorithm>
using namespace std;
int n;
double x[60010],v[60010],ans,minn,mid,maxx;
bool ok()
{
	double a=0,b=1000000001;
	for(int i=0;i<n;i++)
	{
		a = max(a,x[i]-v[i]*mid);
		b = min(b,x[i]+v[i]*mid); 
	}
	if(a<=b) return 1;
	else return 0;
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&x[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&v[i]);
	}
	minn = 0;
	maxx = 1000000001;
	for(int i=0;i<10000;i++)
	{
		mid = (minn+maxx)/2;
		if(ok()) maxx = mid;
		else minn = mid;
	}
	printf("%.12lf\n",mid);
	return 0;
}