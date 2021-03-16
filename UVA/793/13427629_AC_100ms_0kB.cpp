#include<stdio.h>
#include<queue>
#include<utility>
#include<string>
#include<iostream>
#include<vector>
#include<ctype.h>
using namespace std;
int n,m,t,s;
vector <int> parent;
string input;
char cek;
long ans1,ans2;

int findparent(int x)
{
	if(parent[x]==x) return x;
	else
	{
		parent[x] = findparent(parent[x]);
		return parent[x];
	}	
}

void unionset(int a,int b)
{
	int parent_a = findparent(a);
	int parent_b = findparent(b);
	if(parent_a==parent_b) return;
	else if(parent_a < parent_b)
	{
		parent[parent_b] = parent[parent_a];
	}
	else
	{
		parent[parent_a] = parent[parent_b];
	}
}

bool sameparent(int a,int b)
{
	if(findparent(a)==findparent(b)) return 1;
	else return 0;
}

int main()
{
	scanf("%d",&t);
	
	for(int j=0;j<t;j++)
	{
		parent.clear();
		ans1 = 0;
		ans2 = 0;
		scanf("\n%d\n",&s);
		for(int i=0;i<=s;i++)
		{
			parent.push_back(i);
		}
		while(getline(cin,input))
		{
			
			if(input=="" || input.empty())
			{
			
				break;
			}
			sscanf(input.c_str(),"%c %d %d",&cek,&n,&m);
			if(cek=='c')
			{
				unionset(n,m);
			}
			else
			{
				if(sameparent(n,m)==1) ans1+=1;
				else ans2+=1;
			}
		}
		printf("%ld,%ld\n",ans1,ans2);
		if(j!=t-1) printf("\n");
		ans1 = 0;
		ans2 = 0;
	}
	
	
	
	return 0;
}