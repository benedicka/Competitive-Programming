#include<stdio.h>
int main()
{
	int n,x,jum1=0,jum2=0,ans;
	ans = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x==1) jum1++;
		else if(x==2)jum2++;
	}
	while (jum1>0 && jum2>0)
	{
		jum1--;
		jum2--;
		ans++;
	}
	ans+=(jum1/3);
	printf("%d\n",ans);
	return 0;
}