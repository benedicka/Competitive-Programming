#include<bits/stdc++.h>
using namespace std;
int kurung,l;
char x[210];
int main()
{
	scanf("%[^\n]%*c",&x);
	l = strlen(x);
	for(int i=0;i<l;i++)
	{
		if(x[i]=='[')
		{
			kurung++;
			printf("(");
		}
		else if(x[i]==']')
		{
			kurung--;
			printf(")");
		}
		else
		{
			if(kurung%2)
			{
				if(isalpha(x[i]))
				{
					if(islower(x[i])) printf("%c",toupper(x[i]));
					else printf("%c",tolower(x[i]));
				}
				else if(x[i]=='*') printf("+");
				else if(x[i]=='+') printf("*");
				else printf("%c",x[i]);
			}
			else
			{
				printf("%c",x[i]);
			}
		}
	}
	printf("\n");
	return 0;
}