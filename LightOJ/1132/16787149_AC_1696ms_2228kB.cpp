#include<bits/stdc++.h>
using namespace std;
struct matrix
{
    long long x[55][55];
}z;
long long com[55][55];
const long long mod = 4294967296;
long long n,k,ans;
int t;
matrix mul (matrix a, matrix b)
{
    matrix c;
    for (int i=0; i<k; i++)
	{
        for (int j=0; j<k; j++)
		{
            c.x[i][j]=0;
            for (int l=0; l<k; l++)
			{
                c.x[i][j]+=((a.x[i][l])%mod*(b.x[l][j])%mod)%mod;
c.x[i][j]%=mod;
            }
        }
    }
    return c;
}
matrix f (matrix a, long long p) 
{
	matrix r;
	if(p==1) return a;
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<k;j++)
		{
			r.x[i][j] = i==j?1:0;
		}
	} 
	while(p)
	{
        if(p%2!=0)r=mul(r,a);
        a=mul(a,a);
        p/=2;
    }
    return r;
}
void pre()
{
	for(int i=0;i<=50;i++)
	{
		com[i][0] = 1;
		for(int j=0;j<i;j++)
		{
			com[i][j] = com[i-1][j-1]%mod+com[i-1][j]%mod;
			com[i][j]%=mod;
		}
		com[i][i] = 1;
	}
}
void setm()
{
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<k;j++)
		{
			if(i==0)
			{
				if(j==0) z.x[i][j] = 1;
				else z.x[i][j] = com[k-2][j-i-1];
			}
			else
			{
				//printf("%d ",j-i);
				if(j<i) z.x[i][j] = 0;			
				else z.x[i][j] = com[k-2-i+1][j-i];
			}
			//printf("%d ",z.x[i][j]);
		}
	}
}
int main()
{
//	mod = (long long) 1<<32;
	pre();
//	for(int i=0;i<=50;i++)
//	{
//		for(int j=0;j<=i;j++)
//		{
//			printf("%d ",com[i][j]);
//		}
//		printf("\n");
//	}
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%lld %lld",&n,&k);
		if(k!=0 && n!=1)
		{
			k+=2;
			setm();
			z = f(z,n-1);
			ans = 0;
			for(int i=0;i<k;i++)
			{
				ans+= z.x[0][i]%mod;
				ans%=mod;
			}
		}
		else if(n==1) ans = 1;
		else ans = n%mod;
		printf("Case %d: %lld\n",tc,ans%mod);
	}
	return 0;
}

