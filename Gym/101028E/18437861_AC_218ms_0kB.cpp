#include<bits/stdc++.h>
using namespace std;
long long sum,t,n,x,ans,y;
long long gcd(long long a,long long b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		scanf("%lld",&ans);
		sum = ans;
		n--;
		while(n--)
		{
			scanf("%lld",&x);
			ans = gcd(ans,x);
			sum+=x;
		}
		printf("%lld %lld\n",ans,sum/ans);
	}	
	return 0;
}