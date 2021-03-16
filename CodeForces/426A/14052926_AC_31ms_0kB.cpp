#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,s,sum=0,x[110];
	scanf("%d %d",&n,&s);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	sort(x,x+n);
	for(int i=0;i<n-1;i++)
	{
		sum+=x[i];
	}
	if(sum<=s) printf("YES\n");
	else printf("NO\n");
	return 0;
}