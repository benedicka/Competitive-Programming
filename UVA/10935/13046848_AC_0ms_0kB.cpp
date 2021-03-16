#include<queue>
#include<stdio.h>
using namespace std;
int main()
{
	int n,a;
	queue <int> deck;
	while(scanf("%d",&n)==1)
	{
		if(n==0) break;
		for(int i=1;i<=n;i++)
	{
		deck.push(i);
	}
	printf("Discarded cards:");
	while (n>1)
	{
		printf(" %d",deck.front());
		deck.pop();
		a = deck.front();
		deck.pop();
		deck.push(a);
		n--;
		if(n>1) printf(",");
	}
	printf("\n");
	printf("Remaining card: %d\n",deck.front());
	deck.pop();
	}
	
	
	return 0;
}