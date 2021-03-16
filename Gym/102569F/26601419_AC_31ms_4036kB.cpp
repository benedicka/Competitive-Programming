#include<bits/stdc++.h>
using namespace std;
long long n;
int main()
{
	scanf("%lld",&n);
	printf("%lld\n",(n/2)+1);
	for(int i=1;i<=n;i+=2)
	{
		if(i>1) printf(" ");
		printf("%d",i);
	}
	if(n%2==0) printf(" %lld\n",n);
	printf("\n");
	return 0;
}