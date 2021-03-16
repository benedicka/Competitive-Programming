#include<bits/stdc++.h>
using namespace std;
int n,a,b,ma,mb;

int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		if(a>ma)
		{
			ma = a;
			mb = max(b,mb);
		}
	}
	printf("%d\n",mb);
	return 0;
}