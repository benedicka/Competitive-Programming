#include<bits/stdc++.h>
using namespace std;
int n,x,cnt[4],i;
int main()
{
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		scanf("%d",&x);
		cnt[x]++;
	}
	if(cnt[2]>0)
	{
		printf("2");
		cnt[2]--;
		i++;
	}
	if(cnt[1]>0)
	{
		if(i) printf(" ");
		printf("1");
		cnt[1]--;
		i++;
	}
	for(;i<n;i++)
	{
		if(i!=0) printf(" ");
		if(cnt[2]>0)
		{
			printf("2");
			cnt[2]--;
		}
		else
		{
			printf("1");
			cnt[1]--;
		}		
	}
	printf("\n");
	return 0;
}