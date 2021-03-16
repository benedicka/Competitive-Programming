#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum+=a;
	}
	printf("%d\n",sum/5 + (sum%5==0?0:1));
	return 0;
}