#include<bits/stdc++.h>
using namespace std;
int n,x[60],ans[60],cnt;
bool ada[1010];
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i=n-1;i>=0;i--)
	{
		if(!ada[x[i]])
		{
			ans[cnt++] = x[i];
			ada[x[i]] = 1;
		}
	}
	printf("%d\n",cnt);
	for(int i=cnt-1;i>=0;i--)
	{
		if(i!=cnt-1) printf(" ");
		printf("%d",ans[i]);
	}
	printf("\n");
	return 0;
}