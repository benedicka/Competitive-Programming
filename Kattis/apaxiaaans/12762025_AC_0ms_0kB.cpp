#include<stdio.h>
#include<string.h>
int main()
{
 	char x[253],z;
 	int l;
 	scanf("%s",&x);
 	l = strlen(x);
 	for(int i=0;i<l;i++)
 	{
 		if (i==0)
 		{
 			printf("%c",x[i]);
 			z=x[i];
 			i=1;
		}
		if (x[i]!=z) 
		{
			printf("%c",x[i]);
			z= x[i];
		}
	}
    return 0;
}