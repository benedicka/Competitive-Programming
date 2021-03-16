#include<stdio.h>




int main()
{
	int n,ans;
	char x[51];
	scanf("%d",&n);
	scanf("%s",&x);
	ans = 0;
	for(int i=0;i<n-1;i++)
	{
		if(x[i]==x[i+1] ) ans++;
	}
	printf("%d",ans);
	
	
	
	return 0;
}