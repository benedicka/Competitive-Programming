#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
 	int n,x[2000001];
	while (scanf("%d",&n)!=EOF)
	{
		if (n==0) break;
		for (int i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}
		sort (x,x+n);
		for (int i=0;i<n;i++)
		{
			printf("%d",x[i]);
			if (i<n-1) printf(" ");
			else printf("\n");
		}
		
	}
	
    return 0;
}