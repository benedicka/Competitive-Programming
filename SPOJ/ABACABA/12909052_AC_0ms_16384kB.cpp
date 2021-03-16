#include<stdio.h>

void f(int x)
{
	if(x==1) printf("A");
	else
	{
		f(x-1);
		printf("%c",x+64);
		f(x-1);
	}
	return ;
}

int main()
{
	int a;
	scanf("%d",&a);
	f(a);
	
	
	return 0;
}