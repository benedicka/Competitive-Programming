#include<stdio.h>
using namespace std;
int main()
{
	long a,b,t;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld %ld",&a,&b);
		printf("%ld\n",a+b-1);
	}
	return 0;
}