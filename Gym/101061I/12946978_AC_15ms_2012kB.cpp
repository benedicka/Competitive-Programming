#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<stdlib.h>
using namespace std;
char x[100002],y[100002];
int main()
{
	int t,l1,l2,ans;
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%s",&x);
		l1 = strlen(x);
		scanf("%s",&y);
		l2 = strlen(y);
		int j1=0,j2=0;
		for(int i =90;i<=125;i++)
		{
			for(int j=0;j<l2;j++)
			{
				if(y[j]==i) j2++;
			}
			for(int j=0;j<l1;j++)
			{
				if(x[j]==i) j1++;
			}
			ans+=abs(j2-j1);
			j2=0;
			j1=0;
		}
		printf("%d\n",ans);
	}
	
	return 0;
}