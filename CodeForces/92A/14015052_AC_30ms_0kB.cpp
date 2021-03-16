#include<stdio.h>
#include<string.h>
int n,m;
bool ok = 1;
int main()
{
	scanf("%d %d",&n,&m);
	while(m>0)
	{
		for(int i=1;i<=n;i++)
		{
			if(m-i>=0) m-=i;
			else ok = 0;
		}
		if(!ok) break;
	}
	printf("%d\n",m);
	return 0;
}