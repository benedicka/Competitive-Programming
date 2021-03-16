#include<bits/stdc++.h>
using namespace std;
int a,b,n;
char s[100010];
bool ss;
int main()
{
	scanf("%d",&n);
	scanf("%s",&s);
	for(int i=0;i<n;i++)
	{
		if(s[i]=='o') a++;
		else if(s[i]=='n') b++;
	}
	a-=b;
//	printf("%d %d\n",b,a);
	for(int i=0;i<b;i++)
	{
		if(ss) printf(" ");
		printf("1");
		ss = 1;
	}
	for(int i=0;i<a;i++)
	{
		if(ss) printf(" ");
		printf("0");
		ss = 1;
	}
	printf("\n");
	return 0;
}