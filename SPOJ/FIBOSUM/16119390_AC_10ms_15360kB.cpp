#include<bits/stdc++.h>
using namespace std;
long n,m,md;
void multiply(long a[2][2], long b[2][2]) 
{ 
    int mul[2][2]; 
    for (int i = 0; i < 2; i++) 
    { 
        for (int j = 0; j < 2; j++) 
        { 
            mul[i][j] = 0; 
            for (int k = 0; k < 2; k++) 
                mul[i][j] += (a[i][k]%md*b[k][j]%md)%md; 
                mul[i][j] %=md;
        } 
    } 
    for (int i=0; i<2; i++) 
        for (int j=0; j<2; j++) 
            a[i][j] = mul[i][j];  
} 
long power(long F[2][2], int n) 
{ 
    long M[2][2] = {{1,1}, {1,0}}; 
    if (n==1)  return (F[0][0]%md + F[0][1]%md)%md; 
    power(F, n/2); 
    multiply(F, F); 
    if (n%2 != 0) multiply(F, M); 
    return (F[0][0]*1%md + F[0][1]*1%md) %md; 
} 
long find(int n) 
{ 
    long F[2][2] = {{1,1}, {1,0}} ; 
  
    return power(F, n-2); 
} 
int main()
{
	int t;
	scanf("%d",&t);
	md = 1000000007;
	while(t--)
	{
		long long a,b,ans;
		scanf("%ld %ld",&n,&m);
		n-=1;
		if(n<0) n = 0;
		if(n==0) a = 0;
		else if(n==1) a = 1;
		else if(n==2) a = 2;
		else
		{
			a = find(n+2)-1;
		}
		if(m<0) m = 0;
		if(m==0) b = 0;
		else if(m==1) b = 1;
		else if(m==2) b = 2;
		else
		{
			b = find(m+2)-1;
		}
		ans = b-a;
		if(ans<0) ans+=md;
		printf("%lld\n",ans);
	}
	
	
	
	return 0;
}