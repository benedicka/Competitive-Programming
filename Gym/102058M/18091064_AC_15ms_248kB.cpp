#include<bits/stdc++.h>
using namespace std;
long long n,k,a,t,s,tmp,ans = LONG_LONG_MAX;

int main()
{
	scanf("%lld %lld %lld",&n,&k,&a);
	while(n--)
	{
		scanf("%lld %lld",&t,&s);
		
		if(t>=k/a)
		{
			tmp = k/a;
		}
		else
		{
			tmp = k/a;
			tmp+=((k/(t*a) + (tmp%t!=0) )- 1)*s;
		}
		ans = min(ans,tmp);
	}
	printf("%lld\n",ans);
	return 0;
}