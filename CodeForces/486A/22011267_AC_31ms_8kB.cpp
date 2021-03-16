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
	long long n;
	scanf("%lld",&n);
	if (n%2==0)printf("%lld\n",n/2);
	else printf("%lld\n",(n-1)/2-n);
  	return 0;
}