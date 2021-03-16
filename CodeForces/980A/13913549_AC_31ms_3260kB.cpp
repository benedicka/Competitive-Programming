#include<stdio.h>
#include<string.h>
char x[110];
int p[110];
int jum,l,r;
bool ok;
int main()
{
	ok = 1;
	scanf("%s",x);
	l = strlen(x);
	for(int i=0;i<l;i++)
	{
		if(x[i]=='o')
		{
			p[jum] = i+1;
			jum++;
		}
		else r++;
	}
	if(jum==l || jum<1) puts("YES\n");
	else
	{
		if(l%jum==0) puts("YES\n");
		else puts("NO\n");
	}
	return 0;
}