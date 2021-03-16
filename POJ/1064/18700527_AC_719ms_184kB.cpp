#include<stdio.h>
#include<math.h>
double l,m,r,len[100010],ans;
int n,k;
double max(double a, double b)
{
	if(a>b) return a;
	return b;
}
bool ok(double x)
{
	long long res = 0;
	for(int i=0;i<n;i++)
	{
		res+=(int)(len[i]/x);
	//	printf("%lf %lf\n",len[i],x);
		if(res>=k) return 1;
	}
	return 0;
}
int main()
{
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&len[i]);
	}
	l = 0.0;
	r = 10000000.0;
	for(int i=0;i<1000;i++)
	{
		m = (l+r)/2.0;
	//	printf("%lf %lf %lf\n",l,m,r);
		if(ok(m))
		{
			l = m;
			ans = max(ans,m);
		}
		else r = m;
	}
	printf("%.2lf\n",floor(ans*100)/100);
	return 0;
}