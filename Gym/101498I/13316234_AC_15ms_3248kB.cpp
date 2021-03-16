#include<stdio.h>
using namespace std;
int main()
{
	long a,b,t;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld %ld",&a,&b);
		if(a%2==0 && b%2==0) printf("abdullah\n");
		else printf("hasan\n");
}
	return 0;
}