#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,c,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&a,&b,&c);
		if (a==b-c) printf("does not matter\n");
		else if (a<b-c) printf("advertise\n");
		else if (a>b-c) printf("do not advertise\n");
	}
	return 0;
}