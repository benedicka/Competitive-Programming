#include<stdio.h>
int n,a,c = 0;
void tower(int n,char dari,char tujuan,char melalui)
{
	if(n==1)
	{
		c++;
		if(c==a)printf("%d : %c => %c\n",n,dari,tujuan);
		return;
	}
	tower(n-1,dari,melalui,tujuan);
	c++;
	if(c==a)printf("%d : %c => %c\n",n,dari,tujuan);
	tower(n-1,melalui,tujuan,dari );
}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d %d",&n,&a);
		c = 0;
		tower(n,'A','C','B');	
	}

	
	
	
	
	
	return 0;
}