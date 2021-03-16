#include<stdio.h>
#include<string.h>
int n;
char x[3];
char curr,sign;
bool ganti()
{
	if(curr=='x' && x[0]=='-') return 1;
	if(curr=='y' && x[0]=='+' && x[1]=='y') return 1;
	if(curr=='z' && x[0]=='+' && x[1]=='z') return 1;
	return 0;
}
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		sign = '+';
		curr = 'x';
		n-=1;
		for(int i=0;i<n;i++)
		{
			scanf("%s",&x);
			//printf("curr = %c%c\n",sign,curr);
			if(strcmp(x,"No")==0) continue;
			else
			{
				if (ganti())
				{
					if(sign=='+') sign = '-';
					else sign = '+';
				}
				if(curr=='x') curr = x[1];
				else if(curr=='y' && x[1]=='y') curr = 'x';
				else if(curr=='z' && x[1]=='z') curr = 'x';
			}
			
		}
		printf("%c%c\n",sign,curr);
	}
	return 0;
}