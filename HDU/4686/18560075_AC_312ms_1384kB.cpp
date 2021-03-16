#include<bits/stdc++.h>
using namespace std;
struct matrix
{
	long long x[6][6];
	matrix()
	{
		memset(x,0,sizeof(x));	
	}
	
};
long long n,ans,sz=6,a0,ax,ay,b0,bx,by;
const long long mod = 1000000007;
matrix mul(matrix a,matrix b)
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
matrix pow(matrix a,long long p)
{
	matrix r;
	if(p==1) return a;
	for(int i=0;i<sz;i++)
	{
		r.x[i][i] = 1;
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
	matrix b;
	while(scanf("%lld",&n)!=EOF)
	{
		scanf("%lld %lld %lld %lld %lld %lld",&a0,&ax,&ay,&b0,&bx,&by);
		ans = 0;
		matrix a;
		a.x[0][0] = 1;
		a.x[0][1] = 1;
			
		a.x[1][1] = (ax%mod*bx%mod)%mod;
		a.x[1][2] = (ax%mod*by%mod)%mod;
		a.x[1][3] = (ay%mod*bx%mod)%mod;
		a.x[1][4] = by%mod;
		a.x[1][0] = 0;
			
		a.x[2][2] = ax%mod;
		a.x[2][4] = 1;
			
		a.x[3][3] = bx%mod;
		a.x[3][5] = 1;
			
		a.x[4][4] = 1;
		a.x[5][5] = 1;
			
		b.x[0][0] = 0;
		b.x[1][0] = (a0%mod*b0%mod)%mod;
		b.x[2][0] = a0%mod;
		b.x[3][0] = b0%mod;
		b.x[4][0] = ay%mod;
		b.x[5][0] = by%mod;
			
			
		a = pow(a,n);
		for(int i=0;i<sz;i++)
		{
			ans+=(a.x[0][i]%mod * b.x[i][0]%mod)%mod;
			ans%=mod;
		}
		printf("%lld\n",ans);
	}
	return 0;
}