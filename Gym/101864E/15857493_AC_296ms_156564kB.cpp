#include<bits/stdc++.h>
using namespace std;
long long t,n,m,k,md,ans;
long long fact[10000005],inv[10000005];
long long fast(long long x,long long y)
{
	if(y==1) return x;
	long long temp = (fast(x,y/2));
	if(y%2==0) return ((long long)(temp%md)*(temp%md))%md;
	else return ((long long )(((temp%md)*(temp%md))%md*(x%md))%md);	
}
int main()
{
	md = 1e9 + 7;
	fact[0]= 1;
	for(int i=1;i<=10000000;i++)
	{
		fact[i] = (long long)i*fact[i-1]%md;
		fact[i]%=md;
		
	}
	//cout<<fact[10000000]<<endl;
	inv[10000000] = fast(fact[10000000],md-2);
	//cout<<inv[10000000];
	for(int i=10000000;i>0;i--)
	{
		inv[i-1] = (long long)i*inv[i]%md;
		inv[i-1]%=md;
	}
	
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&n,&m,&k);
		if(k>n) printf("0\n");
		else if(k==1) printf("%lld\n",((n%md)*(m%md))%md);
		else if(n==k) printf("%lld\n",fast(m,n));
		else
		{
			ans = fast(m,k)%md;
			printf("%lld\n",ans*((long long)fact[n]*(inv[k]%md*inv[n-k]%md)%md)%md);
		}
	}
	return 0;
}