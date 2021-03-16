#include<stdio.h>
#include<string.h>

int main()
{
	long a;
	int c,ans;
	char x[1000];
	do
	{
		scanf("%ld",&a);
		c=0;
		ans=0;
		if (a==0) break;
		while (a>0)
		{
			x[c]=a%2+'0';
			if (x[c]=='1') ans++;
			c++;
			if(a==1) break;
			a=a/2;
		
		}
		printf("The parity of ");
		for(int i=c-1;i>=0;i--)
		{
			printf("%c",x[i]);
		}
		printf(" is %d (mod 2).\n",ans);
	}while (a!=0);
	return 0;
}