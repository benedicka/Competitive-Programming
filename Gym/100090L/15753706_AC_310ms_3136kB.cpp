#include<bits/stdc++.h>
using namespace std;
long long n,s[200010],a[200010];
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&s[i]);
		if(i==0) a[i] = s[i];
		else a[i] = s[i]-s[i-1];
	}
	for(int i=0;i<n;i++)
	{
		if(i!=0) printf(" ");
		printf("%lld",a[i]);
	}
	printf("\n");
	return 0;
}