#include<bits/stdc++.h>
using namespace std;
long long d,n,m,a[20],f[20];
void multiply(long long a[15][15], long long b[15][15]) 
{ 
    long long mul[15][15]; 
    for (long long i = 0; i < d; i++) 
    { 
        for (long long j = 0; j < d; j++) 
        { 
            mul[i][j] = 0; 
            for (long long k = 0; k < d; k++) 
            {
            	mul[i][j] += ((a[i][k]%m)*(b[k][j]%m))%m; 
            	mul[i][j]%=m;
			}
                
        } 
    } 
    for (long long i=0; i<d; i++) 
        for (long long j=0; j<d; j++) 
            a[i][j] = mul[i][j]%m;  
} 
long long power(long long F[15][15], long long n) 
{ 
    long long M[15][15];
    for(long long i=0;i<d;i++)
    {
    	for(long long j=0;j<d;j++)
    	{
    		M[i][j] = F[i][j];
		}
	}
  
    if (n==1) 
	{
		long long ans;
		ans = 0;
		for(long long i=0;i<d;i++)
		{
			ans+=((F[0][i]%m)*(f[d-i]%m))%m;
			ans%=m;
		}
		return ans;
	} 
    power(F, n/2); 
    multiply(F, F); 
    if (n%2 != 0) multiply(F, M); 
    long long ans;
	ans = 0;
	for(long long i=0;i<d;i++)
	{
		ans+=((F[0][i]%m)*(f[d-i]%m))%m;
		ans%=m;
	}
	return ans;
} 
long long find(long long n) 
{ 
    long long F[15][15];
    for(long long i=0;i<d;i++)
    {
    	for(long long j=0;j<d;j++)
    	{
    		if(i==0) F[i][j] = a[j+1];
    		else
    		{
    			if(j==i-1) F[i][j] = 1;
    			else F[i][j] = 0;
			}
		}
	}
    return power(F, n-d); 
} 
int main()
{
	while(scanf("%lld %lld %lld",&d,&n,&m)!=EOF)
	{
		if(d==0 && n==0 && m==0) break;
		
		for(int i=1;i<=d;i++)
		{
			scanf("%lld",&a[i]);
			a[i]%=m;
		}
		for(int i=1;i<=d;i++)
		{
			scanf("%lld",&f[i]);
			f[i]%=m;
		}
		
		if(n<=d)
		{
			printf("%lld\n",f[n]%m);
		}
		else
		{
			printf("%lld\n",find(n)%m);
		}
	}
	return 0;
}