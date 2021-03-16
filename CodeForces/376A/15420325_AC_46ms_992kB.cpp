#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<ctype.h>
using namespace std;
long long l,tgh,ans;
char x,timbangan[1000010];
int main()
{
	while(1)
	{
		x = getchar();
		if(x=='\n') break;
		timbangan[l] = x;
		if(x=='^') tgh = l;
		l++;
	}
	for(int i=0;i<l;i++)
	{
		if(i<tgh && isdigit(timbangan[i]))
		{
			ans+=(abs(tgh-i)*(timbangan[i]-'0'));
		}
		else if(i>tgh && isdigit(timbangan[i]))
		{
			ans-=(abs(tgh-i)*(timbangan[i]-'0'));
		}
	}
	if(ans==0) printf("balance\n");
	else if(ans<0) printf("right\n");
	else printf("left\n");
	return 0;
}