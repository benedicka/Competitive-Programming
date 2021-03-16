#include<stdio.h>
#include<map>
#include<iostream>
using namespace std;
map < string , int > mp;
int m1,m2,d1,d2,y1,y2,t,ans;
string m;
void pre()
{
	mp["January"] = 1;
	mp["February"] = 2;
	mp["March"] = 3; 
	mp["April"] = 4;
	mp["May"] = 5; 
	mp["June"] = 6; 
	mp["July"] = 7;
	mp["August"] = 8; 
	mp["September"] = 9; 
	mp["October"] = 10; 
	mp["November"] = 11; 
	mp["December"] = 12;
}
int main()
{
	pre();
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		ans = 0;
		cin>>m;
		scanf("%d, %d",&d1,&y1);
		m1 = mp[m];
		cin>>m;
		scanf("%d, %d",&d2,&y2);
		m2 = mp[m];
		//printf("%d %d %d\n%d %d %d\n",d1,m1,y1,d2,m2,y2);
		if(m1>2) y1++;
		if(m2<2 || (m2==2 && d2<29)) y2--;
		ans = ((y2/4)-(y1-1)/4) - ((y2/100)-(y1-1)/100) +((y2/400)-(y1-1)/400);
		printf("Case %d: %d\n",tc,ans);
	}
	return 0;
}