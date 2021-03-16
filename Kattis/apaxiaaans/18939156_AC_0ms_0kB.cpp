#include<bits/stdc++.h>
using namespace std;
char x,y='1';
int main()
{
	while((x = getchar())!=EOF)
	{
		if(x=='\n') break;
		if(x!=y) printf("%c",x);
		y = x;
	}
	printf("\n");
	return 0;
}