#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<map>
#include<algorithm>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
char h[10];
bool palin()
{
	if(h[0]!=h[4]) return 0;
	if(h[1]!=h[3]) return 0;
	return 1;
}
int main()
{
	scanf("%s",&h);
	do
	{
		if(h[4]+1>'9')
		{
			h[4] = '0';
			if(h[3]+1>='6')
			{
				h[3] = '0';
				if(h[1]+1=='4' && h[0]=='2' )
				{
					h[0] = '0';
					h[1] = '0';
				}
				else if(h[1]+1>'9' )
				{
					h[1] = '0';
					h[0]+=1;
				}
				else h[1]+=1;
			}
			else h[3]+=1;
		}
		else
		{
			h[4]+=1;
		}
	}while(!palin());
	printf("%s\n",h);
	return 0;
}