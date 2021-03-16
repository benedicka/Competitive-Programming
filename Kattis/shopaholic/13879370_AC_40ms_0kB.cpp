#include<stdio.h>
#include<string.h>
#include<algorithm>

int main()
{
   long long a,x[2000001],c,ans=0;
  
    	scanf("%lld",&a);
    	for (int i=0;i<a;i++)
   		{
    		scanf("%lld",&x[i]);
    		
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
   printf("%lld\n",ans);
	
    
    return 0;
}