#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,ans,t;
    scanf("%d",&t);
    while (t--)
    {
    	scanf("%d %d %d",&a,&b,&c);
   		a+=b;
    	ans = 0;
    	while (a>=c)
    	{
        	a-=c;
        	ans++;
       	 	a++;
    	}
   		 printf("%d\n",ans);
	}
   
    return 0;
}