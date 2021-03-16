#include<bits/stdc++.h>
using namespace std;
int n,a,cnt;
int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		cnt+=(a-1);
	}
	printf("%s\n",cnt%2?"Constantine":"Mike");
	return 0;
}