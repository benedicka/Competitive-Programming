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
	int n,a,b,c,suma=0,sumb=0,sumc=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&a,&b,&c);
		suma+=a;
		sumb+=b;sumc+=c;
		
	}
	printf("%s",(!suma && !sumb && !sumc)?"YES":"NO");
  	return 0;
}