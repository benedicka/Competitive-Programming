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
	long long a,b,c,ans;
	scanf("%lld %lld %lld",&a,&b,&c);
	ans = (a+b)*c;
	ans = Max(ans,a*b*c);
	ans = Max(ans,a+b+c);
	ans = Max(ans,a*(b+c));
	printf("%lld\n",ans);
  	return 0;
}