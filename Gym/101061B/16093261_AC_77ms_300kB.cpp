#include<bits/stdc++.h>
using namespace std;
struct matrix
{
    long long x[3][3];
};

int mod;
matrix mul (matrix a, matrix b)
{
    matrix c;
    for (int i=0; i<3; i++)
	{
        for (int j=0; j<3; j++)
		{
            c.x[i][j]=0;
            for (int k=0; k<3; k++)
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
	mod = 1000000007;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		n-=1;
		if(n==0) printf("3\n");
		else
		{
			matrix ans;
			ans.x[0][0] = 1;
		    ans.x[0][1] = 4;
		    ans.x[0][2] = 7;
		    ans.x[1][0] = 2;
		    ans.x[1][1] = 5;
		    ans.x[1][2] = 8;
		    ans.x[2][0] = 3;
		    ans.x[2][1] = 6;
		    ans.x[2][2] = 9;
		    ans = f(ans,n);
		    int sum=0;
		    for(int i=0;i<3;i++)
		    {
		    	for(int j=0;j<3;j++)
		    	{
		    		sum+=ans.x[i][j];
		    		sum%=mod;
				}
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}


