#include<bits/stdc++.h>
using namespace std;
long long a,n,k;

int main()
{
	scanf("%lld %lld %lld",&a,&n,&k);
	for(int i=0;i<k;i++)
	{
		if(i) printf(" ");
		printf("%lld",a%(n+1));
		a/=(n+1);
	}
	printf("\n");
	return 0;
}