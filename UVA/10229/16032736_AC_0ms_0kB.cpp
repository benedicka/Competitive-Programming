#include<bits/stdc++.h>
using namespace std;
long md[40],n,m;
void multiply(long a[2][2], long b[2][2]) 
{ 
    int mul[2][2]; 
    for (int i = 0; i < 2; i++) 
    { 
        for (int j = 0; j < 2; j++) 
        { 
            mul[i][j] = 0; 
            for (int k = 0; k < 2; k++) 
                mul[i][j] += (a[i][k]%m*b[k][j]%m)%m; 
        } 
    } 
    for (int i=0; i<2; i++) 
        for (int j=0; j<2; j++) 
            a[i][j] = mul[i][j];  
} 
long power(long F[2][2], int n) 
{ 
    long M[2][2] = {{1,1}, {1,0}}; 
    if (n==1)  return (F[0][0]%m + F[0][1]%m)%m; 
    power(F, n/2); 
    multiply(F, F); 
    if (n%2 != 0) multiply(F, M); 
    return (F[0][0]*1%m + F[0][1]*1%m) %m; 
} 
long find(int n) 
{ 
    long F[2][2] = {{1,1}, {1,0}} ; 
  
    return power(F, n-2); 
} 
int main()
{
	md[0] = 1;
	for(int i=1;i<=32;i++)
	{
		md[i] = md[i-1]*2;
	}
	while(scanf("%ld %ld",&n,&m)!=EOF)
	{
		m = md[m];
		if(n<=2)
		{
			if(n==0) printf("%ld\n",0);
			else printf("%ld\n",1%m);
		}
		else
		{
			printf("%ld\n",find(n)%m);
		}
	}
	
	return 0;
}