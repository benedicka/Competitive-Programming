#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t,a[1000];
	int n,h;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&h);
		for(int i=0;i<100;i++)
		{
			a[i] = 0;
			if(i>=n-h) a[i] = 1;
		}
		do
		{
			for(int i=0;i<n;i++)
			{
				printf("%d",a[i]);
			}
			printf("\n");
		}while(next_permutation(a,a+n));
		if(t>0)printf("\n");
		
		
		
		
	}
	
	
	
	
	return 0;
}