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
	int k,l,m,n,d,ans=0;
	scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
	for(int i=1;i<=d;i++)
	{
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0) ans++;
	}
	printf("%d\n",ans);
  	return 0;
}