#include<stdio.h>
#include<algorithm>
using namespace std;
int tanya[100010];
int n,m,a,c,ans[1000000],idx = 0;

int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		tanya[i] = a;
	}
	sort(tanya,tanya+n);
	c = 0;
	for(int i =1;i<=1000000000;i++)
	{
		if(tanya[idx]<i)
		{
			idx++;
		}
		if(i<=m && i!=tanya[idx])
		{
			//printf("i = %d\n",i);
			ans[c] = i;
			c++;
			m-=i;
		}
		if(i>m) break;
	}
	printf("%d\n",c);
	c-=1;
	for(int i=c;i>=0;i--)
	{
		printf("%d",ans[i]);
		if(i==0) printf("\n");
		else printf(" ");
	}
	
	return 0;
}