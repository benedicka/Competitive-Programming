#include<stdio.h>
#include<math.h>
#include<string>
#include<map>
#include<iostream>
using namespace std;
long long a,b,ans;
int jum[11];
void pre()
{
	jum[0] = 6;
	jum[1] = 2;
	jum[2] = 5;
	jum[3] = 5;
	jum[4] = 4;
	jum[5] = 5;
	jum[6] = 6;
	jum[7] = 3;
	jum[8] = 7;
	jum[9] = 6;
}
void cek(long long x)
{
	if(x==0)
	{
		ans+=jum[0];
	}
	else
	{
		while(x!=0)
		{
			ans+=jum[x%10];
			x/=10;
		}
	}
}
int main()
{
	pre();
	scanf("%lld %lld",&a,&b);
	for(int i=a;i<=b;i++)
	{
		cek((long long)i);
	}
	printf("%lld\n",ans);
	return 0;
}