#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",n%2==0?n*n/2 : n*n/2+1);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i%2==0 && j%2==0) printf("C");
			else if(i%2!=0 && j%2!=0) printf("C");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}