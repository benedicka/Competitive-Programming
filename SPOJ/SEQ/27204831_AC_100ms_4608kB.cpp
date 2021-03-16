#include<bits/stdc++.h>
using namespace std;
struct matrix
{
	long long x[15][15];
	matrix()
	{
		memset(x,0,sizeof(x));	
	}
	
};
long long b[15],c[15],n,k,t,ans;
const long long mod = 1e9;
matrix mul(matrix a,matrix b,int sz)
{
	matrix res;
	for(int i=0;i<sz;i++)
	{
		for(int j=0;j<sz;j++)
		{
			res.x[i][j] = 0;
			for(int k=0;k<sz;k++)
			{
				res.x[i][j] += (a.x[i][k]%mod*b.x[k][j]%mod)%mod;
				res.x[i][j]%=mod;
			}
		}
	}
	return res;
}
matrix pow(matrix a,long long p,int sz)
{
	matrix r;
	if(p==1) return a;
	for(int i=0;i<sz;i++)
	{
		r.x[i][i] = 1;
	} 
    while(p)
	{
        if(p%2)r=mul(r,a,sz);
        a=mul(a,a,sz);
        p/=2;
    }  
	return r;  
}

int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&c[i]);
		}
		scanf("%lld",&k);
		if(k<=n) printf("%lld\n",b[k-1]);
		else
		{
			matrix res;
			for(int i=1;i<n;i++)
			{
				res.x[i][i-1] = 1;
			}
			for(int i=0;i<n;i++)
			{
				res.x[0][i] = c[i];
			}
			res = pow(res,k-n,n);
		
			ans = 0;
			for(int i=0;i<n;i++)
			{
				ans+=(res.x[0][i]*b[n-1-i]);
				ans%=mod;
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
}