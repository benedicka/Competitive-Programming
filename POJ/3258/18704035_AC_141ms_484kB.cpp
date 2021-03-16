#include<stdio.h>
#include<algorithm>
using namespace std;
long long n,x[100010],l,m,r,ans=0,c,len,mr;
bool cek(long long d)
{
	int cnt = 0,nxt;
	nxt = 0;
	for(int i=0;i<n;i++)
	{
		if(x[i]-nxt<d)
		{
			cnt++;
		}
		else
		{
			nxt = x[i];
		}
	}
	return cnt<=mr;
}
int main()
{
	scanf("%lld %lld %lld",&len,&n,&mr);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	sort(x,x+n);
	x[n] = len;
	n+=1;
	l = 0;
	r = len;
	while(l<=r)
	{
		m = (l+r)/2;
	//	printf("%lld %lld\n",l,r);
		if(cek(m))
		{
		//	printf("%lld\n",m);
			ans = max(ans,m);
			l = m+1;
		}
		else r = m-1;
	}
	printf("%lld\n",ans);
	return 0;
}