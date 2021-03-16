#include<stdio.h>
#include<string.h>
#include<algorithm>

int main()
{
    int a,x[20001],c,ans=0,t;
    scanf("%d",&t);
    while (t--)
    {
    	ans = 0;
    	scanf("%d",&a);
    	for (int i=0;i<a;i++)
   		{
    		scanf("%d",&x[i]);
    		
		}
   		std::sort (x,x+a);
   		
   		c=0;
   		for(int i=a-1;i>=0;i--)
   		{
   		if(c<3) c++;
   		if (c==3) 
		   {
		   	ans+=x[i];
		   	c=0;
		   }
   		}
   printf("%d\n",ans);
	}
    
    return 0;
}