#include<stdio.h>
int t,n,m,a,b,c,d;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		while(n--)
		{
			scanf("%d %d %d %d",&a,&b,&c,&d);
			if(a==c && b==d) printf("0\n");
			else if(a-b == c-d || a+b == c+d) printf("1\n");
			else if((a+c)%2 != (b+d)%2) printf("no move\n");
			else printf("2\n");
		}
	}
	return 0;
}