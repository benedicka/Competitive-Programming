#include<stdio.h>
#include<algorithm>
using namespace std;
long long n,x[100010],m,ans,bts,l,r;
bool cek(long long d)
{
	int res = 0,tmp = 0;
	for(int i=0;i<=n;i++)
	{
		if(tmp+x[i]>d || i==n)
		{
			tmp = 0;
			res++;
		}
		tmp+=x[i];
	}
	return res<=bts;
}
int main()
{
	scanf("%lld %lld",&n,&bts);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
		r+=x[i];
		l = max(x[i],l);
	}
	x[n] = 0;
	ans = r;
	while(l<=r)
	{
		m = (l+r)/2;
	//	printf("l = %lld m = %lld r = %lld\n",l,m,r);
		if(cek(m))
		{
		
			ans = min(ans,m);
			r = m-1;
		}
		else l = m+1;
	}
	printf("%lld\n",ans);
	return 0;
}