#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
 long long a,b,c,d;
 
 while (scanf("%lld",&a)!=EOF)
 {
 	if(a==2 )printf("2 is prime.\n");
 	else if(a%2==0) printf("%lld is not prime.\n",a);
 	else 
 	{
 		c=0;
 		for (int i=3;i<=pow(a,0.5);i++)
 		{
 			if (a%i==0)
 			{
 				c++;
 				printf("%lld is not prime.\n",a);
 				break;
			}
		}
		if (c==0)
		{
			d=a;
			b=(a%10)*10;
			a=a/10;
			while (a>0)
			{
				b=b+(a%10);
				b=b*10;
				a=a/10;
			}
			b=b/10;
			if (b==d) printf("%lld is prime.\n",d);
			else
			{
			for (int i=2;i<=pow(b,0.5);i++)
 			{
 				if (b%i==0)
 				{
 				c++;
 				printf("%lld is prime.\n",d);
 				break;
				}
			}
			if (c==0) printf("%lld is emirp.\n",d);
			}
			
		}
		
		
		
		
		
	 
	}
 }
	
	
	
	
	return 0;
}