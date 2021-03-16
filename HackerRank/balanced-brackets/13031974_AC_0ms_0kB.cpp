#include<stdio.h>
#include<stack>
#include<string.h>

using namespace std;
int main()
{
	bool ok;
	char x[100001];
	int n,length;
	stack <char> kurung;
	scanf("%d",&n);
	while(n--)
	{
		ok = 1;
		scanf("%s",&x);
		length = strlen(x);
		for(int i=0;i<length;i++)
		{
			if(x[i]=='(' || x[i]=='[' || x[i]=='{') kurung.push(x[i]);
			else if(i==0 && (x[i]!='(' || x[i]!='[' || x[i]!='{'))
			{
				ok = 0;
				break;
			}
			else
			{
				if(!kurung.empty())
				{
					if(x[i]==')' && kurung.top()!='(')
					{
						ok = 0;
						break;
					}
					else if(x[i]==']' && kurung.top()!='[')
					{
						ok = 0;
						break;
					}
					else if(x[i]=='}' && kurung.top()!='{')
					{
						ok = 0;
						break;
					}
					else
					{
						kurung.pop();
					}
				}
				else
				{
					ok = 0;
					break;
				}
			}
		}
		if(!kurung.empty()) ok = 0;
		if(ok==1) printf("YES\n");
		else printf("NO\n");
		x[0] = '\0';
		while(!kurung.empty())
		{
			kurung.pop();
		}
	}
	return 0;
}