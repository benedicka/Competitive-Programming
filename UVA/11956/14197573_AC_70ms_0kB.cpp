#include<stdio.h>
#include<string.h>
using namespace std;
int t,l;
char x[100010];
int memori[110],curr;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%s",x);
		for(int i=0;i<100;i++)
		{
			memori[i] = 0;
		}
		l = strlen(x);
		curr = 0;
		for(int i=0;i<l;i++)
		{
			if(x[i]=='>')
			{
				curr+=1;
				if(curr==100) curr = 0;
			}
			else if(x[i]=='<')
			{
				curr-=1;
				if(curr==-1) curr = 99;
			}
			else if(x[i]=='+')
			{
				memori[curr]+=1;
				if(memori[curr]==256) memori[curr] = 0;
			}
			else if(x[i]=='-')
			{
				memori[curr]-=1;
				if(memori[curr]==-1) memori[curr] = 255;
			}
		}
		printf("Case %d:",tc);
		for(int i=0;i<100;i++)
		{
			printf(" %0.2X",memori[i]);
		}
		printf("\n");
	}
	return 0;
}