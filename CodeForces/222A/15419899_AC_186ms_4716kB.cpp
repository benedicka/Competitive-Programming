#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
int n,k,a,cnt,idx,macam,del=0;
map < int , int > mp;
vector < int > x;
int main()
{
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(mp[a]==0) macam++;
		mp[a]++;
		x.push_back(a);
	}
	k-=1;
	if(macam!=1)
	{
		for(int i=0;i<=n;i++)
		{
			mp[x[del]]--;
			if(mp[x[del]]==0) macam--; 
			if(mp[x[k]]==0) macam++;
			
			mp[x[k]]++;
			x.push_back(x[k]);
			cnt++;
			k++;
			del++;
			if(macam==1) break;
		}
	}
	
	if(macam==1) printf("%d\n",cnt);
	else printf("-1\n");
	return 0;
}