#include<stdio.h>

int main()
{
 	int n,m,l,r;
 	scanf("%d %d",&n,&m);
 	while(m--)
 	{
 		scanf("%d %d",&l,&r);	
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",i%2);
	}
	printf("\n");
	return 0;
}