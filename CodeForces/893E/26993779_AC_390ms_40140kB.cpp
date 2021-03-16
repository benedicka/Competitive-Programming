#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7,mx=1000000;
long long fact[2*mx+5],inv[2*mx+5],primelist[mx],cnt,t,x,y,ans,pangkat;
bool prime[mx+5];

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
	for(int i=2;i*i<=mx;i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=mx;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=mx;i++)
    {
    	if(!prime[i])
    	{
    		primelist[cnt++] = i;
		}
	}
}
int main()
{
	pre();
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&x,&y);
		ans = pow(2,y-1,mod);
		
		for(int i=0;i<cnt;i++)
		{
			if(x<primelist[i]*primelist[i]) break;
			pangkat = 0;
			while(x%primelist[i]==0)
			{
				x/=primelist[i];
				pangkat++;
			}
			ans*=nCr(y+pangkat-1,pangkat,mod);
			ans%=mod;
			//printf("%lld\n",ans);
		}
		if(x>1)
		{
			ans*=y;
			ans%=mod;
		}
		printf("%lld\n",ans);
	}
	return 0;
}