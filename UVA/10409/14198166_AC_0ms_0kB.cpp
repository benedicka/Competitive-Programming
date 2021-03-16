#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
string command;
int n,top,south,bottom,west,east,north,tmp;
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		top = 1;
		north = 5;
		bottom = 6;
		south = 2;
		east = 3;
		west = 4;
		for(int i=0;i<n;i++)
		{
			cin>>command;
			tmp = top;
			if(command=="north")
			{
				top = north;
				north = bottom;
				bottom = south;
				south = tmp;
			}
			else if(command=="east")
			{
				top = east;
				east = bottom;
				bottom = west;
				west = tmp;
			}
			else if(command=="west")
			{
				top = west;
				west = bottom;
				bottom = east;
				east = tmp;
			}
			else
			{
				top = south;
				south = bottom;
				bottom = north;
				north = tmp;
			}
		}
		printf("%d\n",top);
	}
	
	return 0;
}