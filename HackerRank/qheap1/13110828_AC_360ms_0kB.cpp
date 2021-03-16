#include<set>
#include<stdio.h>
using namespace std;
int main()
{
	int input,a,t,cetak;
	set < int > heap;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&input);
		if(input==3)
		{
			cetak = *heap.begin();
			printf("%d\n",cetak);
		}
		else if(input==2)
		{
			scanf("%d",&a);
			heap.erase(a);
		}
		else
		{
			scanf("%d",&a);
			heap.insert(a);
		}
	}
	
	
	
	return 0;
}