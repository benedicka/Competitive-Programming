#include<bits/stdc++.h>
using namespace std;
string x;
int t,a,b,c,d;
bool ok;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		printf("%d\n",abs(a-c)+abs(b-d));
	}
	return 0;
}