#include<stdio.h>
#include<map>
#include<string>
#include<iostream>
using namespace std;
string x;
map< string , int >  stock;
int main()
{
	int n,cnt;
	cnt = 0;	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>x;
		stock[x]++;
	}
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(stock[x]>0) stock[x]-=1;
		else cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}