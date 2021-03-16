#include<bits/stdc++.h>
#define m 1000000009
using namespace std;
long long n;
void multiply(long long a[3][3], long long b[3][3]) 
{ 
    long long mul[3][3]; 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++) 
        { 
            mul[i][j] = 0; 
            for (int k = 0; k < 3; k++) 
            {
            	mul[i][j] += (a[i][k]%m*b[k][j]%m)%m; 
            	mul[i][j]%=m;
			}
                
        } 
    } 
    for (int i=0; i<3; i++) 
        for (int j=0; j<3; j++) 
            a[i][j] = mul[i][j];  
} 
long power(long long F[3][3], long long n) 
{ 
    long long M[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}}; 
    if (n==1)  return ((F[0][0]%m)*2%m + F[0][1]%m)%m; 
    power(F, n/2); 
    multiply(F, F); 
    if (n%2 != 0) multiply(F, M); 
    return ((F[0][0]%m)*2%m + F[0][1]%m)%m; 
} 
long long find(long long n) 
{ 
    long long F[3][3] = {{1,1,1}, {1,0,0}, {0,1,0}} ; 
  
    return power(F, n-2); 
} 
int main()
{
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==0) break;
		if(n==1) printf("0\n");
		else if(n==2) printf("1\n");
		else if(n==3) printf("2\n");
		else if(n==4) printf("3\n");
		else printf("%lld\n",find(n-1));
	}
	return 0;
}