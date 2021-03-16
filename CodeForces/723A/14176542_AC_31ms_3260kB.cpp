#include<stdio.h>
#include<stdlib.h>
int x1,x2,x3,pt;
int min(int a, int b)
{
	if(a<b) return a;
	return b;
}
int max(int a, int b)
{
	if(a>b) return a;
	return b;
}
int main()
{
	scanf("%d %d %d",&x1,&x2,&x3);
	pt = (max(max(x1,x2),x3)-min(min(x1,x2),x3));
	printf("%d\n",pt);
	return 0;
}