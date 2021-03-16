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
	long long x;
	scanf("%lld",&x);
	printf("%lld\n",x/5 + (x%5!=0));
  	return 0;
}