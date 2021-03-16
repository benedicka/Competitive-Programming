#include<bits/stdc++.h>
using namespace std;
long long n,x,ans,z;
int main()
{
	scanf("%lld %lld",&n,&z);
	scanf("%lld",&ans);
	n--;
	while(n--)
	{
		scanf("%lld",&x);
		ans = __gcd(ans,x);
	}
	printf("%s\n",z%ans==0?"YES":"NO");
	return 0;
}