#include<algorithm>
#include<stdio.h>
#include<iostream>
#include<map>
#include<queue>
using namespace std;
char x[1000010],y[1000010];
int n,ans;
int main()
{
	scanf("%d",&n);
	scanf("%s",&x);
	scanf("%s",&y);
	ans = 0;
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)
		{
			if(x[i]!=y[i]  && x[i]!=x[i+1] && x[i+1]!=y[i+1])
			{
				ans++;
				i+=1;
			}
			else if(x[i]!=y[i])ans++;
		}
		else
		{
			if(x[i]!=y[i]) ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}