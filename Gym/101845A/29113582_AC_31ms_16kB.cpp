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
long long n,ans;
const long long mod = 1e9+7;
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
	scanf("%lld",&n);
	matrix a;
	a.x[0][0] = 16; a.x[0][1] = 9; a.x[0][2] = 4; a.x[0][3] = 1; 
	a.x[1][0] = 1;
	a.x[2][1] = 1;
	a.x[3][2] = 1;
	a.x[4][3] = 1;
	a = pow(a,floor((double)n/10),5);
	for(int i=0;i<5;i++)
	{
		if(n%10>=5 && i==4) break;
		ans+=a.x[i][0];
		ans%=mod;
	}
	printf("%lld\n",ans);
	return 0;
}