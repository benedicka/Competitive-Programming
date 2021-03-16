#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
char a[1100000];
int cnt;
void f(int x0)
{	
	cnt++;
	int x1=0,tmp;
	tmp = x0;
	while(tmp>0)
	{
		tmp/=10;
		x1++;
	}
	if(x1==x0)
	{
		return;
	}
	f(x1);
}
int main()
{
	while(scanf("%s",&a)!=EOF)
	{
		if(strcmp(a,"END")==0) break;
		else if(strcmp(a,"1")==0)
		{
			printf("1\n");
			continue;
		}
		cnt = 1;
		f(strlen(a));
		printf("%d\n",cnt);
	}
	
	return 0;
}