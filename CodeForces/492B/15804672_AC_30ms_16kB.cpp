#include<bits/stdc++.h>
using namespace std;
long long n,l,a[1010];
double mn,mx,md,ans=INT_MAX;
bool cek(double x)
{
	double st = 0;
	for(int i=0;i<n;i++)
	{
		if((double)a[i]-x>st) return 0;
		st = a[i]+x;
	}
	if(st<l) return 0;
	return 1;
}
int main()
{
	scanf("%lld %lld",&n,&l);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}	
	sort(a,a+n);
	mn = 0;
	mx = l;
	for(int i=0;i<1000;i++)
	{
		md = (mn+mx)/2;
		if(cek(md))
		{
			ans = min(ans,md);
			mx = md;
		}
		else mn = md;
	}
	printf("%.9lf\n",ans);
	return 0;
}