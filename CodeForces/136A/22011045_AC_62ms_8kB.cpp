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
	int n,x[110],a;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		x[a] = i+1;
	}
	for(int i=1;i<=n;i++)
	{
		if(i!=1) printf(" ");
		printf("%d",x[i]);
	}
	printf("\n");
  	return 0;
}