#include<bits/stdc++.h>
using namespace std;
int t,n,a,b;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i*i<=n;i++)
		{
			if(n%i==0) a = i;
		}
		b = n/a;
		printf("%d\n",b-a);
	}
	return 0;
}