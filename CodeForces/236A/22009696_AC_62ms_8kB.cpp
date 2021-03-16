#include<string>
#include<iostream>
#include<string.h>
using namespace std;
void Swap(int &a , int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
long long Max(long long a,long long b)
{
	if(a>b) return a;
	return b;
}
int main()
{
	char x[110];
	int l,ans=0;
	bool ada[30] ={0};
	scanf("%s",&x);
	l = strlen(x);
	for(int i=0;i<l;i++)
	{
		if(!ada[x[i]-'a'])
		{
			ada[x[i]-'a'] = 1;
			ans++;
		}
	}
	printf("%s\n",ans%2?"IGNORE HIM!":"CHAT WITH HER!");
  	return 0;
}