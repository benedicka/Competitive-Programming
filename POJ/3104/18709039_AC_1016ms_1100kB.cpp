#include<stdio.h>
#include<algorithm>
using namespace std;
long long n,x[100010],m,ans,k,l,r;
bool cek(long long d)
{
	long long t=0;
	for(int i=0;i<n;i++)
	{
		if(x[i]<=d) continue;
		t+=((x[i]-d)/(k-1)  + ((x[i]-d)%(k-1)!=0));
	}
	return t<=d;
}
int main()
{
	scanf("%lld",&n);
	l = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
		r+=x[i];
	}
	ans = r;
	sort(x,x+n);
	scanf("%lld",&k);
	if(k==1)
	{
		ans = x[n-1];
	}
	else
	{
		while(l<=r)
		{
			m = (l+r)/2;
//			printf("%lld %lld %lld\n",l,m,r);
			if(cek(m))
			{
				ans = min(ans,m);
				r = m-1;
			}
			else l = m+1;
		}		
	
	}
	printf("%lld\n",ans);
	return 0;
}