#include<bits/stdc++.h>
using namespace std;
long long n,m,ans,t;
struct matrix{
	long long x[5][5];	
}mat;
matrix matrixidentity(long long sz)
{
	matrix res;
	for(int i=0;i<=sz;i++)
	{
		for(int j=0;j<=sz;j++)
		{
			res.x[i][j] = 0;
			if(i==j) res.x[i][j] = 1;
		}
	}
	return res;
}
matrix multiplication(matrix a,matrix b,int sz,long long md)
{
	matrix res;
	for(int i=0;i<sz;i++)
	{
		for(int j=0;j<sz;j++)
		{
			res.x[i][j] = 0;
			for(int k=0;k<sz;k++)
			{
				res.x[i][j]+=(a.x[i][k]%md*b.x[k][j]%md)%md;
				res.x[i][j]%=md;
			}
		}
	}
	return res;
}
matrix matpow(matrix a,long long p,long long md)
{
	matrix res;
	res = matrixidentity(2);
	while(p)
	{
		if(p%2) res = multiplication(res,a,2,md);
		
		a = multiplication(a,a,2,md);
		p/=2;
	}
	
	return res;
}
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
    	mat.x[0][0] = 1;
    	mat.x[0][1] = 1;
    	mat.x[1][0] = 1;
    	mat.x[1][1] = 0;
    	if(n==1) ans =  1;
    	else if(n==2) ans = 1;
    	else
    	{
    	    mat = matpow(mat,n-2,m);
    	    ans = mat.x[0][0]%m+mat.x[0][1]%m;
    	    ans%=m;
    	}
    	printf("%lld\n",(2*ans)%m);
    }
	
	return 0;
}