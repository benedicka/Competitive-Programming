#include<bits/stdc++.h>
using namespace std;
char x[110],y[110];
int main()
{
	scanf("%s",&x);
	scanf("%s",&y);
	if(strcmp(strrev(x),y)==0) printf("YES\n");
	else printf("NO\n");
	return 0;
}