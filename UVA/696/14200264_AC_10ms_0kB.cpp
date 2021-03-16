#include<stdio.h>
int n,m,ans,mn,mx;

int main()
{
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(n==0 && m==0) break;
		ans = (n*m+1)/2;
		if(n==1 || m==1) ans = n==1?m:n;
		else if(n==2 && m==2) ans = 4;
		else if(n==2 || m==2)
		{
			mx = n==2?m:n;
			ans = 4*(mx/4)+2*(2<mx%4?2:mx%4);
		}
		printf("%d knights may be placed on a %d row %d column board.\n",ans,n,m);
	}
	return 0;
}