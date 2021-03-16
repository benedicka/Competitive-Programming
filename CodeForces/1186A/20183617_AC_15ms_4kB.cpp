#include<bits/stdc++.h>
using namespace std;
long long n,m,k;
int main()
{
	scanf("%lld %lld %lld",&n,&m,&k);
	printf("%s\n",n<=min(m,k)?"Yes":"No");
	return 0;
}