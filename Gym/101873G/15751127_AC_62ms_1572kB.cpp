#include<bits/stdc++.h>
using namespace std;
long long n,x[100010],y[100010],area,titik;
long long gcd(long long a,long long b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld %lld",&x[i],&y[i]);
	}
	for(int i=0;i<n;i++)
	{
		area+=(x[i]*y[(i+1)%n] -x[(i+1)%n]*y[i]);
		titik+=gcd(abs(x[i]-x[(i+1)%n]),abs(y[i]-y[(i+1)%n]));
	}
	area = abs(area)/2;
	printf("%lld\n",area-titik/2+1);
	return 0;
}