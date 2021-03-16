#include<stdio.h>
int main()
{
	int t,l,u,temp,c,a,b;
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
		a=0;
		scanf("%d %d",& l,&u);
	
		for (int j=l;j<=u;j++)
		{
			c=0;
			for (int k=1;k*k<=j;k++)
			{
				if (j%k==0) c+=2;
				if(j==k*k) c--;
	
			}
			if(a<c)
			{
				a=c;
				b=j;
			} 
		}
		printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,u,b,a);
	}

	
	
	
	
	
	
	return 0;
}