#include<stdio.h>
int main()
{
	bool ok=0;
	int n,a,x,step =0,j=0;
	scanf("%d %d",&n,&a);
	n-=1;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(j==i )j+=x;
		if(j==a-1) ok =1;
	}
	
	if(ok==1) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}