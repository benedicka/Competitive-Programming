#include<bits/stdc++.h>
using namespace std;
stack < char > s;
char x[200010];
int l;
bool ok;
int main()
{
	ok = 1;
	scanf("%s",&x);
	l = strlen(x);
	for(int i=0;i<l;i++)
	{
		if(x[i]=='(') s.push(x[i]);
		else
		{
			if(!s.empty()) s.pop();
			else
			{
				ok = 0;
				break;
			}
		}
	}
	if(!ok) printf("IMPOSSIBLE\n");
	else
	{
		printf("%s",x);
		for(int i=0;i<s.size();i++)
		{
			printf(")");
		}
		printf("\n");
	}
	return 0;
}