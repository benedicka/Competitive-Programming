#include<bits/stdc++.h>
using namespace std;
long long md[40],n,m;
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
long long power(long long F[2][2], int n) 
{ 
    long long M[2][2] = {{1,1}, {1,0}}; 
    if (n==1)  return (F[0][0]%m + F[0][1]%m)%m; 
    power(F, n/2); 
    multiply(F, F); 
    if (n%2 != 0) multiply(F, M); 
    return (F[0][0]*1%m + F[0][1]*1%m) %m; 
} 
long long find(int n) 
{ 
    long long F[2][2] = {{1,1}, {1,0}} ; 
  
    return power(F, n-2); 
}
void multiply1(long long a[2][2], long long b[2][2]) 
{ 
    long long mul[2][2]; 
    for (int i = 0; i < 2; i++) 
    { 
        for (int j = 0; j < 2; j++) 
        { 
            mul[i][j] = 0; 
            for (int k = 0; k < 2; k++) 
            {
            	mul[i][j] += (a[i][k]*b[k][j]); 
            	if(mul[i][j]>=1e9) mul[i][j]/=1e5;
			} 
        } 
    } 
    for (int i=0; i<2; i++) 
        for (int j=0; j<2; j++) 
            a[i][j] = mul[i][j];  
} 
long long power1(long long F[2][2], int n) 
{ 
    long long M[2][2] = {{1,1}, {1,0}},hasil;
	hasil = F[0][0]+F[0][1];
	if(hasil>=1e9) hasil/=1e5; 
	if (n==1)  return hasil; 
	power1(F, n/2); 
    multiply1(F, F); 
    if (n%2 != 0) multiply1(F, M);
	hasil = F[0][0]+F[0][1];
	if(hasil>=1e9) hasil/=1e5; 
    return hasil; 
} 
long long find1(int n) 
{ 
    long long F[2][2] = {{1,1}, {1,0}} ; 
  
    return power1(F, n-2); 
}
double fast(double a,int p)
{
	double tmp;
	if(p==1) return a;
	tmp = fast(a,p/2);
	if(p%2==0) return tmp*tmp;
	else return tmp*tmp*a;
}
int main()
{
	while(scanf("%lld",&n)!=EOF)
	{
		m = 10000;
		if(n<=2)
		{
			if(n==0) printf("%lld\n",0);
			else printf("%lld\n",1%m);
		}
		else if(n<40)
		{
			m = 1e9;
			printf("%lld\n",find(n)%m);
		}
		else if(n>=40)
		{
			long long dpn=0;
			double tmp;
			tmp = (log10(0.5+sqrt(5)/2))*(double)n;
			tmp-= 0.5*log10(5.0); 
			dpn = (long long) (pow(10,tmp-(long long)tmp+3));
			printf("%lld...%004lld\n",dpn,find(n)%10000);
		}
	}
	
	return 0;
}