#include<bits/stdc++.h>
using namespace std;
char x[210];
int n,a[110],b[110];
bool ok1 = 1,ok2 = 1;
int main()
{
	scanf("%d %s",&n,&x);

	for(int i=0;i<2*n;i++)
	{
		if(i<n) a[i] = x[i]-'0';
		else b[i-n] = x[i]-'0';
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++)
	{
	//	printf("%d %d\n",a[i],b[i]);
		if(a[i]>=b[i]) ok1 = 0;
		if(a[i]<=b[i]) ok2 = 0;
	}
	printf("%s\n",ok1||ok2?"YES":"NO");
	return 0;
}