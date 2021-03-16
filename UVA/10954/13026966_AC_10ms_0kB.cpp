#include<queue>
#include<stdio.h>
using namespace std;
int main()
{
	priority_queue <long> input;
	long ans = 0,n,a,cost = 0;
	while(scanf("%ld",&n)!=EOF)
	{
		if(n==0) break;
		ans = 0;
		cost = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%ld",&a);
			a*=-1;
			input.push(a);
		}
		while(!input.empty())
		{
			ans = 0;
			ans+=(-1*input.top());
			input.pop();
			if(input.empty()) break;
			ans+=(-1*input.top());
			input.pop();
			cost+=ans;
			ans*=-1;
			input.push(ans);
			
		}
		printf("%ld\n",cost);
	}
	return 0;
}