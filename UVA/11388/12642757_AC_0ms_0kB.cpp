#include<stdio.h>
#include<stdlib.h>
int gcd(int a, int b)
{
	if (b==0)return a; 
    else return gcd(b, a%b);
}
  

int main()
{
	int t,x,y,ans1,ans2,z;
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
		scanf("%d %d",&x,&y);
		ans1=gcd(x,y);
		if (ans1!=x) printf("-1\n");
		else
		{
			z=y;
			while(z%x!=0 || z%y!=0)
			{
				z+=y;
				if (z>y) break;
			}
			if (z!=y)
			{
				printf("-1\n");
			}
		}
		
		
	if (ans1==x && z==y) printf("%d %d\n",ans1,z);
			
			
			
		
	}
	
	
	
	
	
	return 0;
}