#include<bits/stdc++.h>
using namespace std;
long long n,ans=1,a,b;
int main()
{
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld %lld",&a,&b);
		if(ans<a) ans = a;
		ans+=b;
	}
	printf("%lld\n",ans);
	return 0;
}