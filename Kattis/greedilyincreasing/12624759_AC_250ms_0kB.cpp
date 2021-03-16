#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int t;
	int a[1000000],b[1000000],c,max;
	c=0;
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<t;i++)
	{
		if (c==0)
		{
			max=a[i];
			b[c]=a[i];
			c++;
		}
		if (a[i]>max)
		{
			max=a[i];
			b[c]=a[i];
			c++;
		}
	}
	printf ("%d\n",c);
	for (int i=0;i<c;i++)
	{
		printf("%d",b[i]);
		if (i<c-1) printf(" ");
		else printf("\n");
	}
	return 0;
}	
	
	