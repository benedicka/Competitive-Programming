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
	long long n,k,w,cnt;
	scanf("%lld %lld %lld",&k,&n,&w);
	cnt = (k+w*k)*w/2;
	printf("%lld\n",Max(cnt-n,0));
  	return 0;
}