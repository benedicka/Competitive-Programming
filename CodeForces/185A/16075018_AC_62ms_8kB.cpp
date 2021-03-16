#include<bits/stdc++.h>
using namespace std;
long long n,m;
void multiply(long long a[2][2], long long b[2][2]) 
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
long long power(long long F[2][2], long long n) 
{ 
    long long M[2][2] = {{3,1}, {1,3}}; 
    if (n<=1)  return (F[0][0]%m)%m; 
    power(F, n/2); 
    multiply(F, F); 
    if (n%2 != 0) multiply(F, M); 
    return (F[0][0]*1%m) %m; 
} 
long long find(long long n) 
{ 
    long long F[2][2] = {{3,1}, {1,3}} ; 
  
    return power(F, n); 
} 
int main()
{
	
	scanf("%lld",&n);
	m = 1000000007;
	printf("%lld\n",n>0?find(n)%m:1);
	return 0;
}