#include<stdio.h>

int main()
{
	char x[200010];
	int a,b,n,c=0;
	scanf("%d %d %d",&n,&a,&b);
	if(b>a)
	{
		int temp = b;
		b=a;
		a=temp;
	}
	scanf("%s",x);
	for(int i=0;i<n;i++)
	{
		//printf("a = %d b =%d\n",a,b);
		if(a>=b && x[i]=='.' &&(i==0 || x[i-1]!='A')&& a>0)
		{
			x[i] = 'A';
			a--;
			c++;
		}
		else if(x[i]=='.' &&(i==0 || x[i-1]!='B')&& b>0)
		{
			x[i] = 'B';
			b--;
			c++;
		}
	
	}
	//printf("%s\n",x);
	printf("%d\n",c);
	return 0;
}