#include<stdio.h>
#include<math.h>
double len[10000],l,r,ans=0,m=0;
int n,k;
bool cek(double x)
{
	int res = 0;
	for(int i=0;i<n;++i)
	{
		res+=(int)(len[i]/x);
	}
	return res>=k;
}
int main()
{
	scanf("%d %d",&n,&k);
	double sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&len[i]);
		sum+=len[i];
	}
	l = 0;
	r = sum/k;
	for(int i=0;i<1000;i++)
	{
		m=(l+r)/2.0;
		if(cek(m))
		{
			ans=m>ans?m:ans;
			l=m;
		}
		else r=m;
	}
	printf("%.02lf\n",floor(ans*100)/100);
}