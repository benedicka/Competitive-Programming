#include<stdio.h>
#include<algorithm>
using namespace std;
long long n,x[100010],m,ans,k,l,r;
bool cek(long long d)
{
	long long t=0;
	for(int i=0;i<n;i++)
	{
		if(x[i]<d) continue;
		t+=((x[i]-d+k-1)/(k));
	}
	return t<=d;
}
int main()
{
	scanf("%lld",&n);
	l = 1;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	sort(x,x+n);
	ans = r = x[n-1];
	scanf("%lld",&k);
	if(k==1)
	{
		ans = x[n-1];
	}
	else
	{
		k-=1;
		while(l<=r)
		{
			m = (l+r)/2;
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