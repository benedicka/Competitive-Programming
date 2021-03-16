#include<bits/stdc++.h>
using namespace std;
long long t,n,x[100010],l,m,r,y,cnt;
long long gcd(long long a, long long b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		cnt = 0;
		scanf("%lld",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&x[i]);
			if(i==0) y = x[i];
			y = gcd(y,x[i]);
		}
		for(int i=0;i<n;i++)
		{
			if(x[i]%y!=0) cnt+=(x[i]/y + 1);
			else cnt+=(x[i]/y);
		}
		printf("%lld %lld\n",cnt*y,y);
	}
	return 0;
}