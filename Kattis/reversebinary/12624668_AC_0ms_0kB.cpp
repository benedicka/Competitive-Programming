#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char x[100];
	int ans=0,l,a,b,c;
	l=0;
	scanf("%d",&a);
	while (a!=0)
	{
		x[l]='0'+a%2;
		a=a/2;
		l++;
	}
	x[l]='\0';
	l=l-1;
	c=0;

	for (int i=l;i>=0;i--)
	{
		
		if (x[i]=='1')
		{
			
			ans=ans+pow (2,c);
		
		}
	c++;
	}
	printf("%d\n",ans);
	return 0;
}	
	
	