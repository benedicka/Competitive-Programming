#include<stdio.h>
#include<string.h>
#include<ctype.h>
char x[110];
bool ok;
int l;
int main()
{
	ok = 0;
	scanf("%s",&x);
	l = strlen(x);
	printf("/");
	for(int i=1;i<l;i++)
	{
		if(isalpha(x[i])) 
		{
			if(x[i-1]=='/' && ok) printf("/");
			printf("%c",x[i]);
			ok = 1;
		}
	}
	printf("\n");
	return 0;
}