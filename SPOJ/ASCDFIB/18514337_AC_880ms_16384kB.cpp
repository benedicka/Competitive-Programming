#include<bits/stdc++.h>
using namespace std;
struct matrix
{
	
    long long x[4][4];
};

long long mod=100000;
matrix mul (matrix a, matrix b)
{
    matrix c;
    for (long long i=0; i<2; i++)
	{
        for (long long j=0; j<2; j++)
		{
            c.x[i][j]=0;
            for (long long k=0; k<2; k++)
			{
                c.x[i][j]+=((a.x[i][k]%mod)*(b.x[k][j]%mod))%mod;
                c.x[i][j]%=mod;
            }
        }
    } 
	
    return c;
}

matrix f (matrix a, long long p) 
{

	matrix r;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			r.x[i][j] = i==j?1:0;
		}
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
	long long x,y,t,l,r,batas,z;
	matrix a,tmp;
	tmp.x[0][0] = 1;
	tmp.x[0][1] = 1;
	tmp.x[1][0] = 1;
	tmp.x[1][1] = 0;
	scanf("%lld",&t);
	for(long long tc=1;tc<=t;tc++)
	{
		long long cnt[100010] = {0};
		scanf("%lld %lld",&l,&r);
		r+=1;
		x = 0;
		y = 1;
		for(int i=1;i<l;i++)
		{
			z = x+y;
			z%=mod;
			x = y;
			y = z;
		}
		cnt[x]++;
		if(r!=0)cnt[y]++;
	//	printf("%lld %lld ",x,y);
		for(long long i=3;i<=r;i++)
		{
			z = x+y;
		//	printf("%lld ",z);
			z%=mod;
			cnt[z]++;
			x = y;
			y = z;
		}
	//	printf("\n");
		batas = min((long long)100,r);
		printf("Case %lld:",tc);
		for(long long i=0;i<100000;i++)
		{
			for(int j=0;j<cnt[i];j++)
			{
				printf(" %lld",i);
				batas--;
				if(batas ==0) break;
			}
			if(batas==0) break;
		}
		printf("\n");
	}
	return 0;
}