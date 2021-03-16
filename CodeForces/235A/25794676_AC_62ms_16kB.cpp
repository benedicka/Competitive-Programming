#include<bits/stdc++.h>
using namespace std;
long long n;
int main()
{
	scanf("%lld",&n);
	if(n<3)
	{
		printf("%lld\n",n);
		return 0;
	}
	if(n%2) printf("%lld\n",n*(n-1)*(n-2));
	else if(n%3)printf("%lld\n",n*(n-1)*(n-3));
	else printf("%lld\n",(n-1)*(n-2)*(n-3));
	return 0;
}