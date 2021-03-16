#include<stdio.h>
int n,m,t,ans;
char c;
int min(int a, int b)
{
	if(a<b) return a;
	return b;
}
int main()
{
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{	
		getchar();
		scanf("%c %d %d",&c,&n,&m);
		if(c=='r') ans = min(n,m);
		else if(c=='Q') ans = min(n,m);
		else if(c=='K') ans = ((m+1)/2) * ((n+1)/2);
		else ans = n*m/2;
		printf("%d\n",ans);
	}
	return 0;
}