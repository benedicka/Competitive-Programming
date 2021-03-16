#include<stdio.h>
#include<string.h>
int l;
char x[1010];
bool up,nine;
int main()
{
	scanf("%s",&x);
	l = strlen(x);
	for(int i=0;i<l;i++)
	{
		if(i+1<l-1 && x[i+1]=='.') if(x[i]=='9') nine = 1;
		if(i!=0 && x[i-1]=='.') if(x[i]>='5') up = 1;
	}
	if(nine) printf("GOTO Vasilisa.\n");
	else
	{
		for(int i=0;i<l;i++)
		{
			if(x[i+1]!='.')printf("%c",x[i]);
			else
			{
				if(up)  printf("%c",x[i]+1);
				else printf("%c",x[i]);
				break;
			}
		}
	}
	
	return 0;
} 