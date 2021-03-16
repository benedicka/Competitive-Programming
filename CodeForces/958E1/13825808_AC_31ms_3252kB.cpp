#include<stdio.h>
int main()
{
	long long n,m,a,b;
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%lld %lld",&a,&b);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%lld %lld",&a,&b);
	}
	if(n==m) printf("Yes\n");
	else printf("No\n");
	
	return 0;
}