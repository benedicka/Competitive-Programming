#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	scanf("%s",x);
	int length = strlen(x),c = 0;

	for (int i=0;i<length;i++)
	{
		if (x[i]=='s' &&x[i+1]=='s')
		{
			c=1;
			break;
		}
	}
	if (c==1) printf("hiss");
	else printf("no hiss");
	return 0;
}