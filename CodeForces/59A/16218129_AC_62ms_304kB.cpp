#include<bits/stdc++.h>
using namespace std;
int l,cnt;
char x[110];
bool ok ;
int main()
{
	scanf("%s",&x);
	l = strlen(x);
	for(int i=0;i<l;i++)
	{
		if(isupper(x[i])) cnt++;
	}
	if(cnt>l/2) ok = 1;
	for(int i=0;i<l;i++)
	{
		if(ok) printf("%c",toupper(x[i]));
		else printf("%c",tolower(x[i]));
	}
	return 0;
}