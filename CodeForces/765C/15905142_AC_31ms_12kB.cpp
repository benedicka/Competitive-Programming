#include<bits/stdc++.h>
using namespace std;
long long k,a,b,cnt;
int main()
{
	scanf("%lld %lld %lld",&k,&a,&b);
	
	if((a%k!=0 && b<k ) || (b%k!=0 && a<k))
	{
		printf("-1\n");
	}
	else
	{
		printf("%lld\n",a/k+b/k);
	}
	
	return 0;
}