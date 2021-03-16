#include<bits/stdc++.h>
using namespace std;
int n,x,cnt[3];

int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		cnt[x%2]++;
	}
	printf("%d\n",min(cnt[0],cnt[1]));
	return 0;
}