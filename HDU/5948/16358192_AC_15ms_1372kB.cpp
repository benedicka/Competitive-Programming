#include<bits/stdc++.h>
using namespace std;
long long n,a,b,ans;
int main()
{
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld %lld",&a,&b);
		ans = 2*max(a,b)+min(a,b);
		printf("%lld\n",ans);
	}
	return 0;
}