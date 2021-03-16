#include<stdio.h>
#include<stdlib.h>
int gcd(long a, long b)
{
	if (b==0)return a; 
    else return gcd(b, a%b);
}
  

int main()
{
	long x[1000],y[1000],index=0,b,c,ans,z=0;
	do
	{
		index=0;
		z=0;
		do
		{
			scanf("%ld",&x[index]);
			if (x[0]==0) break;
			index++;
		}while (x[index-1]!=0);
	
		if (x[0]==0) break;
		
		for (int i=1;i<index-1;i++)
		{
			y[z]=abs(x[i]-x[i-1]);
			z++;
		}
		ans=y[0];
		for (int i=1;i<z;i++)
		{
		
			ans=gcd(ans,y[i]);
		}
		printf("%ld\n",ans);
	}while (x[0]!=0);
	
	
	
	
	
	return 0;
}