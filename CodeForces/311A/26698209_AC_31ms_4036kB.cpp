#include<bits/stdc++.h>
using namespace std;
long long n,k;
int main()
{
	scanf("%lld %lld",&n,&k);
	if(n*(n-1)/2<=k) printf("no solution\n");
	else
	{
		for(int i=0;i<n;i++)
		{
			printf("0 %d\n",i);
		}
	}
	return 0;
}