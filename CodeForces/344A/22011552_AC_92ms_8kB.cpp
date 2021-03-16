#include<string>
#include<iostream>
#include<string.h>
using namespace std;
void Swap(int &a , int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
long long Max(long long a,long long b)
{
	if(a>b) return a;
	return b;
}
int main()
{
	long long x,prev=0,ans=0,n;
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld",&x);
		if(prev!=x) ans++;
		prev = x;
	}
	printf("%lld\n",ans);
  	return 0;
}