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
int main()
{
	long long n,x,y;
	scanf("%lld %lld %lld",&n,&x,&y);
	if(((y-n+1)*(y-n+1)+n-1<x) || (n>y)) printf("-1\n");
	else
	{
	    printf("%lld\n",y-n+1);
	    for(int i=1;i<n;i++) printf("1\n");
	}
  	return 0;
}