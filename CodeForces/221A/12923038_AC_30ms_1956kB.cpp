#include<stdio.h>
int main()
{
	int n,a[1000];
	for(int i=0;i<1000;i++)
	{
		a[i] = i+1;
	}
	scanf("%d",&n);
	printf("%d",a[n-1]);
	n--;
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}