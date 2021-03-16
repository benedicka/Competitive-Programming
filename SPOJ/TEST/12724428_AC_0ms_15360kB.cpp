#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int a,c;
	c=0;
	while (scanf("%d",&a)!=EOF)
	{
		if (a==42) c=1;
		if (c==0) printf("%d\n",a);
	}
	
	return 0;
}