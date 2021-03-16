#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
	int t;
	char x[100][101];
	char y[27];
	char abjad[27];
	strcpy(abjad,"abcdefghijklmnopqrstuvwxyz");
	            //qwertyuiopasdfghjklzxcvbnm
	scanf ("%d %s",&t,&y);
	for (int i=0;i<t;i++)
	{
		scanf ("%s",&x[i]);
	}

	for (int i=0;i<t;i++)
	{
		for (int j=0;j<strlen(x[i]);j++)
		{
			if(x[i][j]=='_') x[i][j]=' ';
			for(int k=0;k<strlen(abjad);k++)
			{
				if (x[i][j]== abjad[k])
				{
					x[i][j]=y[k];
					break;
				}
				else if (toupper(x[i][j])== toupper(abjad[k]))
				
				{
					x[i][j]=toupper(y[k]);
					break;
				}
				
			}
		}
	}
	for (int i=0;i<t;i++)
	{
		printf ("%s",x[i]);
		if (i<t-1) printf ("\n");
	}
	
	return 0;
}