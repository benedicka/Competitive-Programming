#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
int main()
{
	long a,b;
	scanf("%ld %ld",&a,&b);
	printf("%ld\n",a+(a-1)/(b-1));
	return 0;
}