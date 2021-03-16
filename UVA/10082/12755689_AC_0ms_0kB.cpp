#include<stdio.h>
#include<string.h>
int main()
{
	char x[100];
	char y[100];
	int length,l;
	strcpy(x,"QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./1234567890-=");
	while(scanf("%[^\n]%*c",&y)!=EOF)
	{
		l = strlen(x);
		length = strlen(y);
		for (int i=0;i<length;i++)
		{
			if (y[i]==' ') printf(" ");
			else
			{
				for (int j=0;j<l;j++)
				{
					if (y[i]==x[j])
					{
					y[i]=x[j-1];
					printf("%c",y[i]);
					break;
					}
				}
			}
			
		}
		printf("\n");
	}
	
		
		
	
	
	return 0;
}