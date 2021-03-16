#include<stdio.h>
int main()
{
	int t;
	long a;
	long long b[52];
	b[0]=2;
	b[1]=3;
	for (int i=2;i<53;i++)
	{
		b[i]=b[i-1]+b[i-2];
	}
	scanf("%d",&t);
	
	for(int j=1;j<=t;j++)
	{
		scanf("%ld",&a);
		printf("Scenario #%d:\n%lld\n\n",j,b[a-1]);
	}

	
	
	
	
	
	return 0;
}