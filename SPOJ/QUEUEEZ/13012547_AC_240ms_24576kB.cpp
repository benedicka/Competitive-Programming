#include<stdio.h>
#include<queue>
using namespace std;

int main()
{
	queue <long long> x;
	long long a;
	int t,input,c = 0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&input);
		if(input==1)
		{
			scanf("%lld",&a);
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
				printf("%lld\n",x.front());
			}
			else printf("Empty!\n");
		}
	}	
	return 0;
}