#include<stdio.h>
#include<math.h>
#include<string>
#include<map>
#include<iostream>
using namespace std;
long long a,m;
bool ok = 0;
int main()
{
	scanf("%lld %lld",&a,&m);
	for(int i=0;i<100000;i++)
	{
		if(a%m==0)
		{
			ok = 1;
			break;
		}
		else a+=(a%m);
		if(a>m) a = a%m;
	}
	if(ok) printf("Yes\n");
	else printf("No\n");
	return 0;
}