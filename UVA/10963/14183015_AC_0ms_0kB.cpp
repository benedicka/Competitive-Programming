#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;
string x;
int t,a,b,d,n;
bool ok;
int main()
{
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		if(i!=0) printf("\n");
		ok = 1;
		scanf("%d",&n);
		scanf("%d %d",&a,&b);
		n-=1;
		d = a-b;
		while(n--)
		{
			scanf("%d %d",&a,&b);
			if(a-b!=d) ok = 0;
		}
		if(ok) printf("yes\n");
		else printf("no\n");
	}
	
	return 0;
}