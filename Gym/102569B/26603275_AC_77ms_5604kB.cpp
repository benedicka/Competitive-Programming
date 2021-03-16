#include<bits/stdc++.h>
using namespace std;
long long n,m,ans,x[200010],l,r,md;
bool ok(long long a)
{
	bool res = 0;
	a-=1;
	for(int i=0;i<n;i++)
	{
		if(i+a>=n) break;
		if(x[i]<=0 && x[i+a]>=0)
		{
			if(min(2*abs(x[i])+x[i+a],2*x[i+a]+abs(x[i]))<=m) 
			{
			//	printf("A %lld. %lld %lld\n",a+1,i,i+a);
				return 1;
			}
		}
		else
		{
			if(x[i]<0 && abs(x[i])<=m)
			{
			//	printf("B %lld. %lld %lld\n",a+1,i,i+a);
				return 1;
			}
			if(x[i]>0 && abs(x[i+a])<=m)
			{
			//	printf("C %lld. %lld %lld\n",a+1,i,i+a);
				return 1;
			}
		}
		if(res) break;
	}
	return res;
}
int main()
{
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	l = 1;
	r = n;
	while(l<=r)
	{
		md = (l+r)/2;
		if(ok(md))
		{
			l = md+1;
			ans = max(ans,md);
		}
		else r = md-1;
	}
	printf("%lld\n",ans);
	return 0;
}