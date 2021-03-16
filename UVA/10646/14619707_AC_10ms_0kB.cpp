#include<stdio.h>
#include<map>
#include<string>
#include<utility>
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
string card;
queue < string > q;
queue < string > h;
int jum;
int value(string x)
{
	if(x[1]-'0'>=2 && x[1]-'0'<=9) return x[1]-'0';
	return 10;
}
int main()
{
	int t,x,y;
	y = 0;
	scanf("%d",&t);
	for(int tc = 1;tc<=t;tc++)
	{
		while(!q.empty()) q.pop();
		y = 0;
		for(int i=1;i<=52;i++)
		{
			cin>>card;
			if(i<=27)q.push(card);
			else h.push(card);		
		}
		jum = 27;
		for(int j=0;j<3;j++)
		{
			card = q.front();
			q.pop();
			jum--;
			x = value(card);
			y+=x;
			for(int i=0;i<10-x;i++)
			{
				q.pop();
				jum--;
			}
		}
		for(int i=0;i<25;i++)
		{
			card = h.front();
			jum++;
			h.pop();
			q.push(card);
		}
		for(int i=0;i<y;i++)
		{
			card = q.front();
			q.pop();
		}
		cout<<"Case "<<tc<<": ";
		cout<<card<<endl;
	}
	return 0;
}