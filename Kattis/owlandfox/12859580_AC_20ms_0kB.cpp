#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,a,c;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&n);
    	c = 0;
    	//printf("%d\n",n);
    	while(n%10==0)
    	{
    		n/=10;
    		c++;
		}
		//printf("%d\n",n);
		n=n-1;
		for(int i=0;i<c;i++)
		{
			n=n*10;
		}
		printf("%d\n",n);
	}
    return 0;
}