#include<stdio.h>
#include<string.h>
int main()
{
	char x[120];
	scanf("%s",x);
	int length = strlen(x);
	for(int i=0;i<length;i++)
	{
		if (i==0 || x[i-1]=='-') printf("%c",x[i]);
	}
	return 0;
}
