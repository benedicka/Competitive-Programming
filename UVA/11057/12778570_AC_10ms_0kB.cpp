#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,x[10002],p,a,b,key,min,max,mid;
	while(scanf("%d",&n)!=EOF)
	{
		for (int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	sort (x,x+n);
	scanf("%d",&p);
	b = 100000000;
	a = 1;
	for (int i=0;i<n;i++)
	{
		key =p-x[i];
	
		min = 0;
		max = n;
		while (min<=max)
		{
			mid = (min+max)/2;
			if (x[mid]==key)
			{
				
				if (x[mid]>=x[i] && (x[mid]-x[i])<(b-a))
				{
				a = x[i];
				b = x[mid];
				}
				
				break;
			}
			else if (x[mid]>key) max = mid-1;
			else min = min = mid +1;
			
		}
	}
	printf("Peter should buy books whose prices are %d and %d.\n\n",a,b);
	}
	
	
	return 0;
}