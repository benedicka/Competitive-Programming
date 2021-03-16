#include<bits/stdc++.h>
using namespace std;
long long t,a,b;
long long gcd(long long a, long long b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&a,&b);
		if(gcd(a,b)!=1) printf("Sim\n");
		else printf("Nao\n");
	}
	return 0;
}