#include<stdio.h>
#include<map>
#include<string>
#include<utility>
#include<iostream>
using namespace std;
int t,n;
pair < string , string > deck[60];
string value[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
string suit[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
int shuffle[110][60],k,h;
string x;
void reset()
{
	int cnt = 0;
	for(int j=0;j<4;j++)
	{
		for(int i=0;i<13;i++)
		{
			deck[cnt] = make_pair(value[i],suit[j]);
			cnt++;
		}
	}
	
//	for(int i=0;i<52;i++)
//	{
//		cout<<deck[i].first<<" of "<<deck[i].second<<endl;
//	}
}
	
void acak(int n)
{
	n-=1;
	pair < string , string > tmp[60];
	for(int i=0;i<52;i++)
	{
		tmp[i] = deck[shuffle[n][i]];
	}
	for(int i=0;i<52;i++)
	{
		deck[i] = tmp[i];
	}
}
int main()
{
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++)
	{
		if(tc!=0) printf("\n");
		scanf("%d",&n);
		reset();
		for(int i=0;i<n;i++)
		{
			//printf("%d\n",i);
			for(int j=0;j<52;j++)
			{
				scanf("%d",&shuffle[i][j]);
				shuffle[i][j]-=1;
			}
		}
		getchar();
		while(getline(cin,x))
		{
			if(x=="") break;
			h = 0;
			for(int i=0;i<x.size();i++)
			{
				h+=(x[i]-'0');
				h*=10;
			}
			h/=10;
			acak(h);
		}
		for(int i=0;i<52;i++)
		{
			cout<<deck[i].first<<" of "<<deck[i].second<<endl;
		}
	}
	return 0;
}