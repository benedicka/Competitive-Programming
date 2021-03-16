#include <bits/stdc++.h>
using namespace std;
const long long mx = 5000000,MOD = 1e9+7,inv2 = 195206359;
long long t,k,fact[mx+5],inv[mx+5],ans[mx+5];
long long pow(long long a, long long b, long long md)
{
	long long res = 1;
	while(b)
	{
		if(b%2) res = (res%md*a%md)%md;
		a*=a;
		a%=md;
		b/=2;
	}
	return res;
}
void pre()
{
	fact[0] = 1;
	for(int i=1;i<=mx;i++)
	{
		fact[i] = (long long)i*fact[i-1]%MOD;
		fact[i]%=MOD;
	
	}
	inv[mx] = pow(fact[mx],MOD-2,MOD);
	for(int i=mx;i>0;i--)
	{
		inv[i-1] = (long long)i*inv[i]%MOD;
		inv[i-1]%=MOD;
	}
//	printf("%lld %lld\n",fact[500000],inv[500000]);
	
	for(int i=0;i<=mx;i++)
	{
		ans[i] = fact[mx];
		ans[i] *=inv[mx-i];
		ans[i] %= MOD;
		ans[i] *=inv[i];
		ans[i] %= MOD;
		ans[i] *=inv2%MOD;
		ans[i] %=MOD;
	}
	for(int i=mx-1;i>=0;i--)
	{
		ans[i] = (ans[i]%MOD+ans[i+1]%MOD)%MOD;
	}
}
int main()
{
	pre();
	scanf("%lld\n",&t);
	while(t--)
	{
		scanf("%lld",&k);
		printf("%lld\n",ans[k]);
	}
	return 0;
}
