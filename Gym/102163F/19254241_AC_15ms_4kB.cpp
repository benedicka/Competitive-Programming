#include<bits/stdc++.h>
using namespace std;
long long t,n,k;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		n-=k;
		printf("%lld\n",n/6+(n%6>0));
	}
	return 0;
}