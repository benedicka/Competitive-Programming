#include<bits/stdc++.h>
using namespace std;
long long s(long long x)
{
	return (x*(1+x)/2);
}
int main()
{
	long long n,k,t,ans;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		k-=s(n);
		if(k%(n)!=0 || k<0) printf("Too drunk to count\n");
		else printf("%lld\n",n+1+k/(n));
	}
	return 0;
}