#include <stdio.h>
#include <math.h> 
int main()
{
	int t,n,x[1001],ans,c;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			
			scanf("%d",&x[i]);
		}
		c = x[0];
		for(int i=1;i<n;i++)
		{
			c++;
			if(x[i]!=c) 
			{
				ans = i;
				break;
			}
		}
		printf("%d\n",ans+1);
	}
	
	
    return 0;
}
