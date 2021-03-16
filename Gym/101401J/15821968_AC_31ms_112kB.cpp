#include<stdio.h>
#include<climits>
#include<utility>
#include<algorithm>
using namespace std;
int n,sum,a;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum+=a;
	}
	sum+=n*(n-1)/2;
	if(sum%7==0) printf("yes\n");
	else printf("no\n");
	return 0;
}