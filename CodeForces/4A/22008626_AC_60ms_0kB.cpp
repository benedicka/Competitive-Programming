#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	printf("%s\n",(x%2 || x==2)?"NO":"YES");
	return 0;
}