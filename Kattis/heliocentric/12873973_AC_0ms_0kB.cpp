#include<stdio.h>
#include<string.h>


int main()
{
	long a,b,x,y,c=1;
	while(scanf("%ld %ld",&a,&b)!=EOF)
	{
		if(a==0 && b==0) 
		{
			printf("Case %d: 0\n",c);
			c++;
		}
		else
		{
			int day=0;
			while(a!=0 || b!=0)
			{
				x = 365-a;
				y = 687-b;
				if(x<y)
				{
					a = 0;
					b+=x;
					b%=687;
					day+=x;
				}
				else
				{
					b = 0;
					a+=y;
					a%=365;
					day+=y;
				}
				
			}
			printf("Case %d: %d\n",c,day);
			c++;
		}
	}
	
	
	
	return 0;
}