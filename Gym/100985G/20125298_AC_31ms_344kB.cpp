#include<bits/stdc++.h>
using namespace std;
stack < char > s;
bool ok;
int l;
char x[100010];
int main()
{
	scanf("%s",&x);
	l = strlen(x);
	ok = 1;
	for(int i=0;i<l;i++)
	{
		if(x[i]=='A') 
		{
			s.push(x[i]);
		}
		else
		{
			if(s.empty())
			{
				ok = 0;
			}
			else s.pop();
		}
	}
                if(!s.empty()) ok = 0;
		if(ok) printf("Sim\n");
		else printf("Nao\n");
	
	return 0;
}