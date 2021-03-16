#include<bits/stdc++.h>
using namespace std;
struct matrix
{
	long long x[15][15];	
};
long long n,k,t,ans,mod = 9973;
matrix mul(matrix a,matrix b)
{
	matrix res;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			res.x[i][j] = 0;
			for(int k=0;k<n;k++)
			{
				res.x[i][j] += (a.x[i][k]%mod*b.x[k][j]%mod)%mod;
				res.x[i][j]%=mod;
			}
		}
	}
	return res;
}
matrix pow(matrix a,long long p)
{
	matrix r;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			r.x[i][j] = i==j?1:0;
		}
	} 
    while(p)
	{
        if(p%2)r=mul(r,a);
        a=mul(a,a);
        p/=2;
    }  
	return r;  
}
int main()
{
	matrix a;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%lld",&a.x[i][j]);
			}
		}
		a =pow(a,k);
		ans = 0;
		for(int i=0;i<n;i++)
		{
			ans+=a.x[i][i];
			ans%=mod;
		}
		printf("%lld\n",ans);
	}
	return 0;
}