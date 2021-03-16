#include <stdio.h>
#include<stdlib.h>
int main()
{
	long long int x, y;
	while(scanf("%lli %lli", &x, &y) != EOF)
	{
		printf("%lli\n", abs(y-x));
	}
}