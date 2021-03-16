#include<iostream>
#include<algorithm>
#include<utility>
#include<stdio.h>
#include<math.h>
using namespace std;
double x[100010],y,ans,bagi,l,r,m;
pair < double , double > a[100010];
long long n,k;
bool cmp(double a,double b)
{
	return a>b;
}
bool cek()
{
	double res=0,tmp[1010];
	
	for(int i =0;i<n;i++)
	{
		tmp[i] = a[i].first*100-m*a[i].second;		
	}
	sort(tmp,tmp+n,cmp);
	for(int i=0;i<n-k;i++)
	{
		res+=tmp[i];
	}
	return res>=0;
}
int main()
{
    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
    	if(n==0 && k==0) break;
    	for(int i=0;i<n;i++)
    	{
    		scanf("%lf",&x[i]);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%lf",&y);
			a[i] = make_pair(x[i],y);
		}
		
		ans = 0;
		l = 0;
		r = 100;
		for(int i=0;i<100;i++)
		{
			m = (l+r)/2;
			if(cek())
			{
				ans = max(ans,m);
				l = m;
			}
			else r = m;
		}
	//	printf("%lf\n",ans);
		printf("%lld\n",(long long)round(ans));
	}
    return 0;
}