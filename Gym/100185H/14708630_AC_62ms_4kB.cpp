#include<stdio.h>
#include<string>
#include<iostream>
#include<map>
#include<queue>
#include<utility>
#include<ctype.h>
using namespace std;

int main()
{
	int n,m,k;
	while(scanf("%d %d %d",&n,&m,&k)!=EOF)
	{
		int mx=1;
		for(int i = 0 ;i<m;i++)
		{
			mx*=2;
		}
		mx*=(n+1);
		//printf("%d\n",mx);
		if(mx>=k) printf("yes\n");
		else printf("no\n");
	}
		
	return 0;
}