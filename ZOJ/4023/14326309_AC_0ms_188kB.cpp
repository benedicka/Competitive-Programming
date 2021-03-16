#include<stdio.h>
#include<ctype.h>
#include<string.h>
char x[40],y[50];
int t;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s %s",&x,&y);
		y[0] = toupper(y[0]);
		printf("%s%s\n",y,x);
	}
	return 0;
}