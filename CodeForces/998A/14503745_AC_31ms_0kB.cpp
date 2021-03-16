#include<stdio.h>
#include<string.h>
int main()
{
	int n,a[15],idx,min;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==0 || min>a[i])
		{
			idx = i+1;
			min = a[i];
		}
	}
	if(n==1 || (n==2 && a[0]==a[1])) printf("-1");
	else
	{
		printf("1\n%d\n",idx);
	}
	return 0;
}