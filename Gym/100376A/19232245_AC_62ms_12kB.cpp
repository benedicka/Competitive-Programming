#include<bits/stdc++.h>
using namespace std;
int n,x[1010],ans;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(x[i]>x[j]) ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}