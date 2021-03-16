#include<bits/stdc++.h>
using namespace std;
int now = 0,t = 1,num[210];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		num[i] = i+1;
	}
	for(int i=0;i<n-1;i++)
	{
		now+=(i+1);
		now%=n;
		if(i==0) printf("%d",num[now]);
		else printf(" %d",num[now]);
	}
	printf("\n");
	return 0;
}