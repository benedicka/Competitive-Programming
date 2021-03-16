#include<stdio.h>
#include<string.h>
char x[110];
int main()
{
	scanf("%s",&x);
	if(strstr(x,"1111111") || strstr(x,"0000000")) printf("YES\n");
	else printf("NO\n");
	return 0;
}