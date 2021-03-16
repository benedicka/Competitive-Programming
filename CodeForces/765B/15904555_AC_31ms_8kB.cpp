#include<bits/stdc++.h>
using namespace std;
char x[30],tmp;
int idx = 0;
bool ada[40],ok=1;
int main()
{
	while(1)
	{
		tmp = getchar();
		if(tmp=='\n') break;
		if(!ada[tmp-'a'])
		{
			x[idx] = tmp;
			ada[x[idx]-'a'] = 1;
			idx++;
		}
	}
	for(int i=0;i<idx;i++)
	{
		if(x[i]!=i+'a')
		{
			ok = 0;
			break;
		}
	}
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}