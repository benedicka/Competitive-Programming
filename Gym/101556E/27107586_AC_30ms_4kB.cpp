#include<bits/stdc++.h>
using namespace std;
long long t,n,m,gcd,lcm;


int main ()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&m);
		gcd = __gcd(n-1,m-1);
		lcm = (n-1)*(m-1)/gcd;
		printf("%lld\n",lcm+1-(((lcm/(n-1))-1)*((lcm/(m-1))-1))/2);
	}
	return 0;
}