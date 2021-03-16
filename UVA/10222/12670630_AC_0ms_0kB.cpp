#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
	char x[48],y[300];
	int length,a;
	strcpy(x,"qwertyuiop[]\\asdfghjkl;'zxcvbnm,./'`1234567890-=");
	a=strlen(x);
	while (scanf("%[^\n]%*c",&y)!=EOF)
	{
	
		if (y[0]=='\0') break;
		length=strlen(y);
		for (int i=0;i<length;i++)
		{
			if (y[i]==' ' || y[i]=='\n') printf("%c",y[i]);
			else
			{
				for(int j=0;j<a;j++)
				{
					if(tolower(y[i])==x[j])
					{
						printf("%c",x[j-2]);
						break;
					}
				}
			}
			
		}
		printf("\n");
		y[0]='\0';
	}
	return 0;
}