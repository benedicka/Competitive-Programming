#include<stdio.h>
#include<string>
#include<iostream>
#include<map>
using namespace std;
map < int ,string > mp;
int m,d,t;
int e[13] = {31,28,31,30,31,30,31,31,30,31,30,31};
int x[15][40];
void pre()
{
	mp[0] = "Sunday";
	mp[1] = "Monday";
	mp[2] = "Tuesday";
	mp[3] ="Wednesday";
	mp[4] = "Thursday";
	mp[5] = "Friday";
	mp[6] = "Saturday";
}
void pre2()
{
	int c = 6;
	for(int i=1;i<=12;i++)
	{
		for(int j=1;j<=e[i-1];j++)
		{
			if(c>=7) c%=7;
			x[i][j] = c;
			c++;
		}
	}
}
int main()
{
	pre();
	pre2();
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&m,&d);
		cout<<mp[x[m][d]]<<endl;
	}
	return 0;
}