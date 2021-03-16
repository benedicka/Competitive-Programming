#include<stdio.h>
#include<stack>
using namespace std;

int main()
{
	stack <long long> x;
	int t,input,a,c = 0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&input);
		if(input==1)
		{
			scanf("%d",&a);
			x.push(a);
			c++;
		}
		else if(input==2)
		{
			if(c>0) 
			{
				x.pop();
				c--;
			}
		}
		else if(input==3)
		{
			if(c>0)
			{
				printf("%lld\n",x.top());
			}
			else printf("Empty!\n");
		}
	}	
	return 0;
}