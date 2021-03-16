#include<bits/stdc++.h>
using namespace std;
int t;
long long a,b;
long long gcd(long long a,long long b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&a,&b);
		if(gcd(a,b)==1) printf("GOOD\n");
		else printf("NOT GOOD\n");
	}
	return 0;
}