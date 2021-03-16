#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,a[100010],sum=0,prefix[100010]={0};
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		prefix[i] = prefix[i-1]+a[i];
	}
	for(int i=1;i<=n;i++)
	{
		sum+=(a[i]*(prefix[n]-prefix[i]));
	}
	printf("%lld\n",sum);
	return 0;
}