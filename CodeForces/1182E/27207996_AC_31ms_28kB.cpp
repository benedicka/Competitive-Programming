#include<bits/stdc++.h>
using namespace std;
struct matrix
{
	long long x[15][15];
	matrix()
	{
		memset(x,0,sizeof(x));	
	}
	void reset()
	{
		memset(x,0,sizeof(x));	
	}
};
long long c,f[5],ans,n,tmp,pangkat;
const long long mod = 1e9+7;
matrix mul(matrix a,matrix b,int sz,long long md)
{
	matrix res;
	for(int i=0;i<sz;i++)
	{
		for(int j=0;j<sz;j++)
		{
			res.x[i][j] = 0;
			for(int k=0;k<sz;k++)
			{
				res.x[i][j] += (a.x[i][k]%md*b.x[k][j]%md)%md;
				res.x[i][j]%=md;
			}
		}
	}
	return res;
}
matrix pow(matrix a,long long p,int sz,long long md)
{
	matrix r;
	if(p==1) return a;
	for(int i=0;i<sz;i++)
	{
		r.x[i][i] = 1;
	} 
    while(p)
	{
        if(p%2)r=mul(r,a,sz,md);
        a=mul(a,a,sz,md);
        p/=2;
    }  
	return r;  
}
long long pow(long long a,long long p,long long md)
{
	long long r = 1;
	if(p==1) return a;
    while(p)
	{
        if(p%2)
		{
			r*=a;
			r%=md;
		}
        a*=a;
        a%=md;
        p/=2;
    } 
//    printf("%lld %lld %lld %lld\n",a,p,md,r);
	return r%md;  
}
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<3;i++)
	{
		scanf("%lld",&f[i]);
	}
	scanf("%lld",&c);
	ans = 1;
	matrix res;
	res.x[0][0] = 1; res.x[0][1] = 1; res.x[0][2] = 1;
	res.x[1][0] = 1;
	res.x[2][1] = 1;
	res = pow(res,n-3,3,mod-1);
	tmp = 2;
	for(int i=0;i<3;i++)
	{
		pangkat = 0;
		for(int j=0;j<3;j++)
		{
			pangkat+=res.x[0][j]*(tmp==j);
			pangkat%=(mod-1);
		}
		tmp--;
		ans *= pow(f[i],pangkat,mod);
		ans%=mod;
	}
	res.reset();
	for(int i=0;i<5;i++)
	{
		res.x[0][i] = 1;
	}
	res.x[1][0] = 1;
	res.x[2][1] = 1;
	res.x[3][3] = 1;
	res.x[3][4] = 1;
	res.x[4][4] = 1;
	res = pow(res,n-3,5,mod-1);
	pangkat = res.x[0][4]*2;
	pangkat %=(mod-1);
	ans *= pow(c,pangkat,mod);
	ans%=mod;
	printf("%lld\n",ans);
	return 0;
}