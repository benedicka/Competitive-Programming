#include<stdio.h>
#include<string.h>
#include<string>
#include<map>
#include<iostream>
using namespace std;
int b,n,d,c,v;
int bank[21];
bool ok;
int main()
{
	while(scanf("%d %d",&b,&n)!=EOF)
	{
		if(b==0 && n==0) break;
		ok = 1;
		for(int i=0;i<b;i++)
		{
			scanf("%d",&bank[i]);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d %d %d",&d,&c,&v);
			bank[d-1]-=v;
			bank[c-1]+=v;
		}
		for(int i=0;i<b;i++)
		{
			if(bank[i]<0)
			{
				ok = 0;
				break;
			}
		}
		if(ok) printf("S\n");
		else printf("N\n");
	}
	return 0;
}