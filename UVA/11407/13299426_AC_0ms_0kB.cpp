#include<stdio.h>
int pc[10000],ans[10010],c;
void pre()
{
	for(int i=1;i*i<=10000;i++)
	{
		pc[i] = i*i;
	}
	ans[0] = 0;
	for(int i=1;i<=10000;i++)
	{
		c = 1;
		ans[i] = 100000;
		while(pc[c]<=i)
		{
			if(ans[i]>1+ans[i-pc[c]]) ans[i] = 1+ans[i-pc[c]];
			c++;
			if(c>100) break;
		}
	}
}
int main()
{
	int t, a;
	pre();
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&a);
		printf("%d\n",ans[a]);
	}
	return 0;
}