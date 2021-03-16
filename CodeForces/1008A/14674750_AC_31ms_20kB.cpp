#include<stdio.h>
#include<map>
#include<algorithm>
#include<string.h>
#include<utility>
#include<iostream>
#include<stack>
#include<queue>
#include<map>
using namespace std;
char x[110];
bool ok;
bool vowel(char x)
{
	x = tolower(x);
	if(x=='a' || x=='i' || x=='e' || x=='u' || x=='o')  return 1;
	return 0;
}
int main()
{
	ok = 1;
	scanf("%s",&x);
	int l,cek;
	l = strlen(x);
	if(l==1 && (!vowel(x[0]) && tolower(x[0])!='n')) ok = 0;
	else
	{
		for(int i=0;i<l;i++)
		{
			if(tolower(x[i])=='n')
			{
				continue;
			}
			if(!vowel(x[i]) && !vowel(x[i+1]))
			{
				ok = 0;
				break;
			}
		}
	}
	
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}