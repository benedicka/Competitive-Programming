#include<bits/stdc++.h>
using namespace std;
int t,n,a,tmp;
bool ok;

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ok = 1;
		scanf("%d",&n);
		scanf("%d",&tmp);
		for(int i=1;i<n;i++)
		{
			scanf("%d",&a);
			if(a!=tmp) ok = 0;
		}
		printf("%d\n",ok?n:1);
	}
	return 0;
}