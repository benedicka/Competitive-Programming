#include<bits/stdc++.h>
using namespace std;
long long n,m,a,b,ans;
int main()
{
	scanf("%lld %lld %lld %lld",&n,&m,&a,&b);
	ans = n/m * b;
	if(n%m!=0) ans+=b;
	ans = min(ans,n*a);
	ans = min(ans,n/m * b + n%m*a);
	printf("%lld\n",ans);
	return 0;
}