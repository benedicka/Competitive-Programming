#include<stdio.h>
int n,t,p,q,length;
char x[1000];
int main()
{
	int k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&k,&n);	
		p = 1;
		q = 1;
		x[0] = '\0';
		length = 0;
		while(n!=1)
		{
			if(n%2!=0)
			{
				n-=1;
				n/=2;
				x[length] = 'r';
			}
			else
			{
				n/=2;
				x[length] = 'l';
			}
			length++;
		}
		length--;
		for(int i=length;i>=0;i--)
		{
			if(x[i]=='r') p=p+q;
			else if(x[i]=='l') q = q+p;
		}
		printf("%d %d/%d\n",k,p,q);
	}	
	return 0;
}