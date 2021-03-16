#include<stdio.h>

int main()
{
	int a,b,c,d,e,gcd;
	int prime[3]={2,3};
	scanf("%d %d",&a,&b);
	if (a==6 || b==6) printf("1/6\n");
	else if (a==1 && b==1) printf("1/1\n");
	else
	{
		if (a>b)
		{
			c=6-a+1;
			e=c;
			gcd=1;
			d=6;
			for (int i=0;i<2;i++)
			{
				if (c%prime[i]==0) 
				{
					while (c%prime[i]==0 && d%prime[i]==0)
					{
						c=c/prime[i];
						d=d/prime[i];
						gcd=gcd*prime[i];
					
					}
				}
				if (c==1) break;
			}
		
			printf("%d/%d\n",e/gcd,6/gcd);
		}
		else
		{
			c=6-b+1;
			e=c;
			gcd=1;
			d=6;
			for (int i=0;i<2;i++)
			{
				if (c%prime[i]==0) 
				{
					while (c%prime[i]==0 && d%prime[i]==0)
					{
						d=d/6;
						c=c/prime[i];
						gcd=gcd*prime[i];
					
					}
				}
				if (c==1) break;
			}
			printf("%d/%d\n",e/gcd,6/gcd);
		
		
		}
	}
	
	
	
	
	return 0;
}