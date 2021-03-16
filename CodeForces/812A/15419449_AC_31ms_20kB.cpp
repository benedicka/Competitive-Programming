#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
int l[10],s[10],r[10],p[10];
bool ok;
int main()
{
	for(int i=1;i<=4;i++)
	{
		scanf("%d %d %d %d",&l[i],&s[i],&r[i],&p[i]);
	}
	ok = 0;
	if(l[3]==p[2] && l[3]==1) ok = 1;
	if(!ok && l[1]==p[4] && l[1]==1) ok = 1;
	if(!ok && l[2]==p[1] && l[2]==1) ok = 1;
	if(!ok && l[4]==p[3] && l[4]==1) ok = 1;
	
	if(!ok && s[1]==p[3] && s[1]==1) ok = 1;
	if(!ok && s[2]==p[4] && s[2]==1) ok = 1;
	if(!ok && s[3]==p[1] && s[3]==1) ok = 1;
	if(!ok && s[4]==p[2] && s[4]==1) ok = 1;
	
	if(!ok && r[1]==p[2] && r[1]==1) ok = 1;
	if(!ok && r[2]==p[3] && r[2]==1) ok = 1;
	if(!ok && r[3]==p[4] && r[3]==1) ok = 1;
	if(!ok && r[4]==p[1] && r[4]==1) ok = 1;
	if(!ok)
	{
		for(int i=1;i<=4;i++)
		{
			if((l[i]==1 || s[i]==1 || r[i]==1) && p[i]==1) 
			{
				ok = 1;
				break;
			}
		}
	}
	
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}