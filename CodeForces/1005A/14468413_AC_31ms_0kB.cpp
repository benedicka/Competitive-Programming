#include<stdio.h>
int ans[1010];
int main()
{
	int n,a,cnt,jum;
	jum = -1;
	cnt = 1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==1)
		{
			jum++;
			//printf("%d %d",i,jum);
			ans[jum] = a;
		}
		ans[jum]=a;
	}
	printf("%d\n",jum+1);
	for(int i=0;i<=jum;i++)
	{
		printf("%d",ans[i]);
		i==jum?printf("\n"):printf(" ");
	}
	return 0;
}