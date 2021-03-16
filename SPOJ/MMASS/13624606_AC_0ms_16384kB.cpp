#include<stack>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char x[110];
	int l,ans,hitung;
	stack < int > count;
	scanf("%s",&x);
	l = strlen(x);
	hitung = 0;
	for(int i=0;i<l;i++)
	{
		if(x[i]=='(') count.push(-1);
		else if(x[i]==')')
		{
			hitung = 0;
			while(count.top()!=-1)
			{
				hitung+=count.top();
				count.pop();
			}
			count.pop();
			if(isdigit(x[i+1]))
			{
				hitung*=(x[i+1]-'0');
				i++;
			}
			count.push(hitung);
		}
		else if(x[i]=='C')
		{
			if(isdigit(x[i+1]))
			{
				count.push(12*(x[i+1]-'0'));
				i++;
			}
			else count.push(12);
		}
		else if(x[i]=='H')
		{
			if(isdigit(x[i+1]))
			{
				count.push(1*(x[i+1]-'0'));
				i++;
			}
			else count.push(1);
		}
		else if(x[i]=='O')
		{
			if(isdigit(x[i+1]))
			{
				count.push(16*(x[i+1]-'0'));
				i++;
			}
			else count.push(16);
		}
		//printf("%d\n",count.top());
	}
	
	while(!count.empty())
	{
		ans+=count.top();
		count.pop();
	}
	printf("%d\n",ans);
	return 0;
}