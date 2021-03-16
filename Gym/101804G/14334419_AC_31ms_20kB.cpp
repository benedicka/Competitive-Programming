#include<stdio.h>
#include<string>
#include<algorithm>
#include<utility>
#include<iostream>
#include<vector>
#define mx 1000000007
using namespace std;
int main()
{
	long long n,c,ans = 1,x;
	scanf("%lld %lld",&n,&c);
	for(int i=0;i<n;i++)
	{
		ans = (ans*6)%mx;
	}
	x = c-3*n;
	for(long long i = x+1; i<=x+n; i++)
	{
		ans = (ans*i)%mx;
	}
	printf("%lld\n",ans);
	return 0;
}