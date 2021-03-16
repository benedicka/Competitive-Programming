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
long long n,ans,sz=4,mod;
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
	b.x[0][0] = 9;
	b.x[1][0] = 6;
	b.x[2][0] = 4;
	b.x[3][0] = 2;
	while(scanf("%lld %lld",&n,&mod)!=EOF)
	{
		if(n==0) printf("0\n");
		else if(n==1) printf("%lld\n",2%mod);
		else if(n==2) printf("%lld\n",4%mod);
		else if(n==3) printf("%lld\n",6%mod);
		else if(n==4) printf("%lld\n",9%mod);
		else
		{
			ans = 0;
			matrix a;
			a.x[0][0] = 1;
			a.x[0][1] = 0;
			a.x[0][2] = 1;
			a.x[0][3] = 1;
			
			a.x[1][0] = 1;
			a.x[1][1] = 0;
			a.x[1][2] = 0;
			a.x[1][3] = 0;
			
			a.x[2][0] = 0;
			a.x[2][1] = 1;
			a.x[2][2] = 0;
			a.x[2][3] = 0;
			
			a.x[3][0] = 0;
			a.x[3][1] = 0;
			a.x[3][2] = 1;
			a.x[3][3] = 0;
			
			a = pow(a,n-4);
			for(int i=0;i<sz;i++)
			{
				ans+=(a.x[0][i]%mod * b.x[i][0]%mod)%mod;
				ans%=mod;
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
}