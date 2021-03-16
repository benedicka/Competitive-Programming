#include<stdio.h>
#include<map>
#include<algorithm>
#include<string>
#include<utility>
#include<iostream>
#include<stack>
#include<queue>
#include<map>
using namespace std;
map < int , bool > exist;
int princess[4],prince[4],ans;
bool cek()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j) continue;
			for(int k=0;k<3;k++)
			{
				if(k==i || k==j) continue;
				if((princess[i]<prince[0]) + (princess[j]<prince[1]) +(princess[k]<prince[2])<2) return 0 ;
			}
		}
	}
	return 1;
}
int main()
{
	while(scanf("%d %d %d %d %d",&princess[0],&princess[1],&princess[2],&prince[0],&prince[1])!=EOF)
	{
		ans = 53;
		exist.clear();
		if(princess[0]==0 && princess[1]==0 && princess[2]==0 && prince[0]==0 && prince[1]==0) break;
		for(int i=0;i<3;i++)
		{
			exist[princess[i]]  =1;
		}
		for(int i=0;i<2;i++)
		{
			exist[prince[i]]  =1;
		}
		for(int i=1;i<=53;i++)
		{
			if(exist[i]) continue;
			prince[2] = i;
			if(cek()) 
			{
				ans = i;
				break;
			}
		}
		if(ans>52) printf("-1\n");
		else printf("%d\n",ans);
	}	
	return 0;
}