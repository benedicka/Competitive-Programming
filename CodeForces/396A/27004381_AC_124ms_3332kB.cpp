#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7,mx=100010;
long long fact[2*mx+5],inv[2*mx+5],n,a,cnt,ans;
vector < long long > faktor;
map < long long , long long > mp;
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
int nCr(long long n, long long r, long long md) 
{ 
    if(n==r) return 1;
    if(r==0) return 1; 
    return (((fact[n]*inv[r])%md)*inv[n-r])%md;
} 
void pre()
{
	fact[0] = 1;
	for(int i=1;i<=2*mx;i++)
	{
		fact[i] = (long long)i*fact[i-1]%mod;
		fact[i]%=mod;
	
	}
	inv[2*mx] = pow(fact[2*mx],mod-2,mod);
	for(int i=2*mx;i>0;i--)
	{
		inv[i-1] = (long long)i*inv[i]%mod;
		inv[i-1]%=mod;
	}
}
int main()
{
	pre();
	scanf("%lld",&n);
	ans = 1;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a);
	//	printf("ans : %lld\n",ans);
		for(int j=2;j*j<=a;j++)
		{
			while(a%j==0)
			{
				a/=j;
				mp[j]++;
				if(mp[j]==1)
				{
					faktor.push_back(j);
				}
			}
		}
		if(a>1)
		{
			mp[a]++;
			if(mp[a]==1)
			{
				faktor.push_back(a);
			}
		}
	}
	for(int i=0;i<faktor.size();i++)
	{
		ans*=nCr(n+mp[faktor[i]]-1,n-1,mod);
		ans%=mod;
	}
	printf("%lld\n",ans);
	return 0;
}