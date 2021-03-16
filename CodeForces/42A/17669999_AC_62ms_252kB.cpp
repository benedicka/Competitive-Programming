#include<bits/stdc++.h>
using namespace std;
double a[30],b[30],v,ans=0,l,r,m,x=0;
int n;
bool cek(double x)
{
	double vt=0,tmp;
	for(int i=0;i<n;i++)
	{
		tmp = a[i]*x;
		if(tmp>b[i]) return 0;
		vt+=tmp;
		if(vt>v) return 0;
	}
	return 1;
}
int main()
{
	scanf("%d %lf",&n,&v);
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&b[i]);
	}
	l = 0;
	r = v;
	for(int i=0;i<10000;i++)
	{
		m = (l+r)/2;
		if(cek(m)) 
		{
			ans = max(ans,m);
			l = m;
		}
		else r = m;
	}
	for(int i=0;i<n;i++)
	{
		x+=a[i]*ans;
	}
	printf("%lf\n",x);
	return 0;
}