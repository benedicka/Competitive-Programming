#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<iostream>
#include<map>
#include<string>
using namespace std;
char x[1000000],y[1000000];
map < string , bool >mp;
int t,l;
bool flag[1000000];
bool comp(char x , char y)
{
	if(tolower(x)==tolower(y)) return x<y;
	return (tolower(x)<tolower(y));

}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		y[0] = '\0';
		mp.clear();
		scanf("%s",&x);
		l = strlen(x);
		sort(x,x+l,comp);
		do
		{
			if(!mp[x])
			{
				printf("%s\n",x);
				mp[x] = 1;
			}
		}while(next_permutation(x,x+l,comp));
	}
	return 0;
}