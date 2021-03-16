#include<stdio.h>
#include<algorithm>
using namespace std;
long long n,x[100010],l,m,r,ans,c;
bool cek(long long d)
{
	int cnt = 0,nxt;
	nxt = x[0];
	cnt = 1;
	for(int i=1;i<n;i++)
	{
		if(x[i]-nxt>=d)
		{
			cnt++;
			nxt = x[i];
			if(cnt>=c) return 1;
		}
	}
	return 0;
}
int main()
{
	scanf("%lld %lld",&n,&c);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	sort(x,x+n);
	l = 1;
	r = 1000000000;
	while(l<=r)
	{
		m = (l+r)/2;
		if(cek(m))
		{
			ans = max(ans,m);
			l = m+1;
		}
		else r = m-1;
	}
	printf("%lld\n",ans);
	return 0;
}