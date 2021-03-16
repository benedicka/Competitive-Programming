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
    long long n,k,odd,even;
    scanf("%lld %lld",&n,&k);
    even = odd = n/2;
    if(n%2) odd+=1;
    if(k<=odd)
    {
    	printf("%lld\n",1+(k-1)*2);
	}
	else
	{
		k-=odd;
		printf("%lld\n",2+(k-1)*2);
	}
    return 0;
}