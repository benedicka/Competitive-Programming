#include <stdio.h>
int main ()
{
	int m,s,a;
	scanf("%d %d",&m,&s);
	if(m*9<s ||( m>1 && s==0)) printf("-1 -1\n");
	else
	{
		a = s;
		
		for(int i=m;i>0;i--)
		{
			for(int j=0;j<=9;j++)
			{
				if (i==m && m>1&& j==0) j+=1;
				if(a-j>=0 && a-j<=(i-1)*9)
				{
					a-=j;
					printf("%d",j);
					break;
				}
			}
		}
		
		
		
		
		printf (" ");
		a= s;
		for(int i=m;i>0;i--)
		{
			for(int j=9;j>=0;j--)
			{
				if(a-j>=0 && a-j<=(i)*9)
				{
					a-=j;
					printf("%d",j);
					break;
				}
			}
		}
		
	
		
		printf ("\n");
	}
	
	return 0;
}
