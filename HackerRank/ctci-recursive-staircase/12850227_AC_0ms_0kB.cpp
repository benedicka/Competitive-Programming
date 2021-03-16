#include<stdio.h>

int main()
{
	int s,ans[100],n;
	scanf("%d",&s);
	ans[0]= 1;
	ans[1]= 1;
	ans[2]= 2;
	for(int i=3;i<100;i++)
	{
		ans[i] = ans[i-1]+ans[i-2]+ans[i-3];
	}
	while(s--)
	{
		scanf("%d",&n);
		
		printf("%d\n",ans[n]);
	}

	return 0;

}