#include<stdio.h>
int t,k,ans;

int f(int p,int q)
{
	if(p==1 && q==1) return 1;
	if(p>q)
	{
		return (2*f(p-q,q)+1);
	}	
	else
	{
		return (2*f(p,q-p));
	}
		
}
int main()
{
	int p,q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d/%d",&k,&p,&q);
		ans = f(p,q);	
		printf("%d %d\n",k,ans);
		
		
		
		
	}
	return 0;
}