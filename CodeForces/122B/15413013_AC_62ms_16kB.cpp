#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;
int n,l,ans,mx;
char x[60];
map < char , int > mp;
int main()
{
	scanf("%s",&x);
	l = strlen(x);
	for(int i=0;i<l;i++)
	{
		mp[x[i]]++;
	}
	if(mp['4']==0 && mp['7']==0) printf("-1\n");
	else
	{
		if(mp['4']>=mp['7']) printf("4\n");
		else printf("7\n");
	}
	return 0;
}