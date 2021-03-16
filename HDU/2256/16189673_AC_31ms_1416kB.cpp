#include<bits/stdc++.h>
using namespace std;
struct matrix
{
    long long x[4][4];
};

int mod;
matrix mul (matrix a, matrix b)
{
    matrix c;
    for (int i=0; i<2; i++)
	{
        for (int j=0; j<2; j++)
		{
            c.x[i][j]=0;
            for (int k=0; k<2; k++)
			{
                c.x[i][j]+=((a.x[i][k]%mod)*(b.x[k][j]%mod))%mod;
                c.x[i][j]%=mod;
            }
        }
    }
    return c;
}

matrix f (matrix a, int p) 
{
    matrix r;
   	if(p==1) return a;
	r = f(a,p/2);
    if(p%2!=0) return(mul(r,mul(r,a)));
    else return mul(r,r);    
}

int main()
{
	int t,n;
	mod = 1024;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n==1) printf("9\n");
		else
		{
			matrix ans;
			ans.x[0][0] = 5;
		    ans.x[0][1] = 12;
		    ans.x[1][0] = 2;
		    ans.x[1][1] = 5;
		    ans = f(ans,n-1);
		    long long sum = (ans.x[0][0]*5%mod+ans.x[0][1]*2%mod)%mod;
			printf("%lld\n",(2*sum-1)%mod);
		}
	}
	return 0;
}

