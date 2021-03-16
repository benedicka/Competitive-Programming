#include<bits/stdc++.h>
using namespace std;
struct matrix
{
	int x[110][110];
	matrix()
	{
		memset(x,0,sizeof(x));	
	}
	
};
int n,ans,c[110],t;
const int mod = 2;
char s[110];
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
matrix pow(matrix a,int p)
{
	matrix r;
	if(p==1) return a;
	for(int i=0;i<n;i++)
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

	while(scanf("%d",&t)!=EOF)
	{
		scanf("%s",&s);
		n = strlen(s);
		
		for(int i=0;i<n;i++)
		{
			c[i] = s[i]-'0';
		}
		matrix a;
		a.x[0][0] = 1;
		a.x[0][n-1] = 1;
		for(int i=1;i<n;i++)
		{
			a.x[i][i] = 1;
			a.x[i][i-1] = 1;
		}
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				printf("%d ",a.x[i][j]);
//			}
//			printf("\n");
//		}
		a = pow(a,t);

//		
		
		for(int i=0;i<n;i++)
		{
			ans = 0;
			for(int j=0;j<n;j++)
			{
				ans+=(a.x[i][j]*c[j]);
				ans%=mod;
			}
			printf("%d",ans);
		}
		printf("\n");
	}
	return 0;
}