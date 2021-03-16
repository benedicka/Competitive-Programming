#include<stdio.h>
int n,a,b,c,ba,bb,cek,ans;
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int main()
{
	ans = 0;
	scanf("%d %d %d %d",&n,&a,&b,&c);
	ba = n/a;
	bb = n/b;
	for(int i=0;i<=ba;i++)
	{
		for(int j=0;j<=bb;j++)
		{
			
			cek = n-(a*i+b*j);
			//printf("%d\n",cek);
			if(cek>=0 && cek%c==0)
			{
				//printf("%d %d\n",i,j);
				ans = max(ans,i+j+(cek/c));
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}