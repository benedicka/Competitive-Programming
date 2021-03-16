#include<stdio.h>
#include<algorithm>

int main()
{
	int t,m,a[1000011],b[1000011],c=0,temp;
	char x[1000010];
	scanf("%d",&t);
	while(t--)
	{
		//printf("%d\n",t);
		scanf("%d",&m);
		c=0;
		for (int i=0;i<m;i++)
		{
			scanf("%d %d",&a[i],&b[i]);
		}
		for (int i=m-1;i>=0;i--)
		{
			temp = a[i]+b[i]+c;
			x[i] = temp%10+'0';
			if(temp>9) c=1;
			else c=0;
		}
		x[m]='\0';
		for (int i=0;i<m;i++)
		{
			printf("%c",x[i]);
		}
		if(t!=0)printf("\n\n");
else printf("\n");
	}
	return 0;
}