#include<stdio.h>
int main()
{
	int t,n,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);	
		printf("3");
		if(n>=1)
		{
			x = 103993;
			y = 33102;
			printf(".");
			for(int i=0;i<n;i++)
			{
				x = (x%y)*10;
				printf("%d",x/y);
			}
		}
		printf("\n");
	}
	return 0;
}