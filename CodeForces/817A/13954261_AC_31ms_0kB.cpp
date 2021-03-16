#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,x,y;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&x,&y);

	if(((abs(a-c))%x==0)&& ((abs(b-d))%y==0) && ((abs(a-c))/x)%2==((abs(b-d))/y)%2) printf("YES\n");
	else printf("NO\n");
	return 0;
}