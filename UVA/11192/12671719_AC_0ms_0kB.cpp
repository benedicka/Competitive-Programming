#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
	long a,c,b;
	int length;
	char x[200];
	while (scanf("%ld",&a)!=EOF)
	{
		if (a==0) break;
		scanf("%s",&x);
		length = strlen(x);
		a=length/a;
		for (int i=0;i<length;i++)
		{
			c++;
			b=i;
			if (c==a)
			{
				for (int j=0;j<c;j++)
				{
					printf("%c",x[b]);
					b--;
				}
				c=0;
			}
			if (i==length-1)printf("\n");
		}
		
	}
	return 0;
}