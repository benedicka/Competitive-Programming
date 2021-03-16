#include<stdio.h>
int h,ans;
int main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	if(n==1) ans = 1;
	else if(n-m>m-1) ans = m+1;
	else ans = m-1;
	printf("%d\n",ans);
	return 0;
}