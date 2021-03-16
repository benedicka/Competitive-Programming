#include<bits/stdc++.h>
using namespace std;
struct matrix
{
    long long x[55][55];
}z;
long long com[55][55];
const int mod = 1e9 + 7;
int t;
matrix mul (matrix a, matrix b,int k)
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
matrix f (matrix a, long long p,int k) 
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
        if(p%2!=0)r=mul(r,a,k);
        a=mul(a,a,k);
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
void setm(int k)
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
class SumOfPowers
{
	public:
		SumOfPowers()
		{
			pre();
		}
		int value(int n, int k)
		{
			//printf("%d %d\n",n,k);
			long long ans = 0;
			if(n==1) return 1;
			else
			{
				k+=2;
				setm(k);
				z = f(z,n-1,k);
				ans = 0;
				for(int i=0;i<k;i++)
				{
					ans+= z.x[0][i]%mod;
					ans%=mod;
				}
				cout<<ans<<endl;
				return (int)ans;
			}
		}
};
//
//int main()
//{
//	SumOfPowers x;
//	cout<<x.value(1000000000,50)<<endl;
//}