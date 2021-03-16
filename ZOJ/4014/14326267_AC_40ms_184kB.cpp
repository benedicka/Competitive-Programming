#include<stdio.h>
int n,m,a,b,t,cnt,x;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		cnt = 0;
		scanf("%d %d %d %d",&n,&m,&a,&b);
		if(a>b)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					scanf("%d",&x);
					if(x<a || x>b) cnt++;
				}
			}
			printf("No Solution\n");
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					scanf("%d",&x);
					if(x<a || x>b) cnt++;
				}
			}
			printf("%d\n",cnt);
		}
	}		
	return 0;
}