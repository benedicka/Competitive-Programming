#include<stdio.h>
int main()
{
	long ans[1000000],jumlah[1000000],c=0;
	ans[3]=0;
	jumlah[3]=0;
	for (int i=4;i<=1000000;i++)
	{
		if(i%2==0)
		{
			c++;
			ans[i]=ans[i-1]+jumlah[i-1]+c;
			jumlah[i]=jumlah[i-1]+c;
		}
		else
		{
			ans[i]=ans[i-1]+c+jumlah[i-1];
			jumlah[i]=jumlah[i-1]+c;
		}
	}
	int a;
	do
	{
		scanf("%d",&a);
		if (a<3) break;
		printf("%ld\n",ans[a]);
	}while (a>=3);
	
	
	
	
	return 0;
}