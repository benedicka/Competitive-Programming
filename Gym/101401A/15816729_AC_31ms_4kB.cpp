#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
	scanf("%d %d %d",&a,&b,&c);
	b+=(a/2);
	printf("%d\n",min(b,c));
	return 0;
}