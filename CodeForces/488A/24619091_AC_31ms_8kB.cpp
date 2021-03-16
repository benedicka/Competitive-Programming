#include<bits/stdc++.h>
using namespace std;
long long n,ans;
bool ok(long long x)
{
	x = abs(x);
	while(x>0)
	{
		if(x%10==8) return 1;
		x/=10;
	}
	return 0;
}
int main()
{
	scanf("%lld",&n);
	do
	{
		n++;
		ans++;
	}while(!ok(n));
	printf("%lld\n",ans);
	return 0;
}