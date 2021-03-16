#include<bits/stdc++.h>
using namespace std;
char x[100010];
int t;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&x);
		if(strstr(x,"101") || strstr(x,"010")) printf("Good\n");
		else printf("Bad\n");
	}
	return 0;
}