#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main()
{
	int n;
	char x[1001];
	scanf("%s",x);
	n = strlen(x);
	for(int i=0;i<n;i++)
	{
		if(i==0) x[i]=toupper(x[i]);
		printf("%c",x[i]);
	}
	
	
	
	return 0;
}