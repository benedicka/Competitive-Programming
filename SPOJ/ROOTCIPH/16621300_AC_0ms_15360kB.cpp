#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c,t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&a,&b,&c);
		printf("%lld\n",a*a-2*b);
	}
	return 0;
}