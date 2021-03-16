#include<bits/stdc++.h>
using namespace std;
int n,m,cnt = 1;
vector < int > adj[210];
bool visit[210],ok;
map < string , int > mp;
char a[200],b[200];
void dfs(int from,int target)
{
	if(from==target)
	{
		ok = 1;
	}
	for(int i=0;i<adj[from].size();i++)
	{
		dfs(adj[from][i],target);
		if(ok) return;
	}
}
int main()
{
	mp.clear();
	cin >> n >> m;
	for(int i=0;i<n;i++) 
	{
	    scanf("%s are worse than %s", a, b);
	    if(mp[b] == 0) 
		{
	        mp[b] = cnt;
	        cnt++;
	    }
	     if(mp[a] == 0) 
		{
	        mp[a] = cnt;
	        cnt++;
	    }
	    adj[mp[b]].push_back(mp[a]);
	}
	for(int i=0;i<m;i++) 
	{
	    scanf("%s are worse than %s",a,b);
	    ok = 0;
	    if(mp[a]==0 || mp[b]==0)
	    {
	    	printf("Pants on Fire\n");
		}
		else
		{
			dfs(mp[a],mp[b]);
		   	if(ok)
			{
			   	printf("Alternative Fact\n");
			} 
		   	else
		   	{
		   		dfs(mp[b],mp[a]);
		   		if(ok) printf("Fact\n");
				else printf("Pants on Fire\n");
			}
		}
		
	}
	return 0;
}