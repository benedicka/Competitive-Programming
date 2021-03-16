#include<stdio.h>
#include<string.h>


int main()
{
	int ans=3,n,b=2;
	scanf("%d",&n);
	n--;
	for(int i=0;i<n;i++)
	{
		ans+=b;
		b*=2;
	}
	printf("%d\n",ans*ans);
	return 0;
}