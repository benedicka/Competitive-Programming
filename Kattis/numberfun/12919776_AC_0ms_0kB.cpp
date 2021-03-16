#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	int a,b,c;
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if (a+b==c) printf("Possible\n");
		else if (a*b==c)printf("Possible\n");
		else if (a-b==c||b-a==c) printf("Possible\n");
		else if ((a/b==c && a%b==0)||(b/a==c && b%a==0))printf("Possible\n");
		else printf("Impossible\n");
	}

	return 0;
}	