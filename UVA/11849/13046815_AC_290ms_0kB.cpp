#include<stack>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y,c,ans = 0;
	stack <int> jack;
	stack <int> jill;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(a==0 && b==0) break;
		for(int i=0;i<a;i++)
		{
			scanf("%d",&c);
			jack.push(c);
		}
		for(int i=0;i<b;i++)
		{
			scanf("%d",&c);
			jill.push(c);
		}
		ans = 0;
		if(!jack.empty())
		while(!jack.empty() && !jill.empty())
		{
			//printf("%d %d\n",jack.top(),jill.top());
			if(jack.top()==jill.top())
			{
				ans++;
				if(!jack.empty())jack.pop();
				if(!jill.empty())jill.pop();

			}
			else if (jack.top()>jill.top())
			{
				if(!jack.empty())jack.pop();
			}
			else
			{
				if(!jill.empty())jill.pop();
			}
			
		}
		printf("%d\n",ans);
	}
	return 0;
}