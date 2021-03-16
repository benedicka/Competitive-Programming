#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;
string x;
int n,l;
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		cin>>x;
		if(x=="1" || x=="4" || x=="78") printf("+\n");
		else if(x[x.size()-1]=='5' && x[x.size()-2]=='3') printf("-\n");
		else if(x[x.size()-1]=='4' && x[0]=='9') printf("*\n");
		else if(x.size()>=3 && x[0]=='1' && x[1]=='9' && x[2]=='0')printf("?\n");
	}
	return 0;
}