#include<bits/stdc++.h>
using namespace std;
long long n,m,mod;
long long fast(long long a, long long b) 
{
    long long res = 1;
    //a%=mod;
    while(b)
	{
        if(b%2==1) 
		{
            res = (res%mod*a%mod) % mod;
            res%=mod;
    	}
        a*=a;
		a%=mod;
        b/= 2;
	}
    return res % mod;
}
int main() 
{
    scanf("%lld %lld",&n,&m);
    mod = n;
    printf("%lld\n",fast((n*(n+1)/2)%mod,m)%mod);
    return 0;
}
