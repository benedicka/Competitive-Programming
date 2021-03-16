#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
long long t,n,m,mn,md,mx,ans;
long long f(long long i,long long j)
{
	return (long long) i*i + 100000 * i + j*j - 100000 * j + i * j;
}
bool check(long long x)
{
	long long a,b,c,res=0,cnt=0;
	
	for(int i=1;i<=n;i++)
	{
		a = 1;
		c = n;
		while(a<=c)
		{
			b = (a+c)/2;
			if(f(b,i)<x)
			{
				a = b+1;
				res = b;
			}
			else c = b-1;
		}
		cnt+=(res);
	}
//	printf("cnt = %lld x = %lld\n",cnt,x);
	return cnt<m;
}
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&m);
		mx = ((long long)1<<50);
		mn = mx*-1;
		
		while(mn<=mx)
		{
			md = (mn+mx)/2;
			//printf("%lld %lld %lld\n",mn,md,mx);
			if(check(md))
			{
				ans = md;
				mn = md+1;
			}
			else mx = md-1;
		}
		printf("%lld\n",ans);
	}
	return 0;
}