#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a,t,b;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&a,&b);
		a*=a;
		b = 2*b*b;
		printf("%d\n",a>b?1:2);
	}
	return 0;
}