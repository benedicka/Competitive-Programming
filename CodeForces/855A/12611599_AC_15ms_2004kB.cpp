#include<stdio.h>
#include<string.h>

int main()
{
	int t,c;
	char x[100][101];
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
		scanf("%s",&x[i]);
	}
		printf ("NO\n");
	for (int i=1;i<t;i++)
	{
		c=0;
		for (int j=i-1;j>=0;j--)
		{
			if (strcmp(x[i],x[j])==0) 
			{
			c=1;
			break;
			}
			
		}
		if (c==1) 
		{
			printf("YES\n");
			c=0;
		}
		else printf("NO\n");
	}
	
	return 0;
}