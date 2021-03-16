#include<stdio.h>
#include<queue>
using namespace std;
int step[22],stair[22];
int t,n,s;
void f(int s,int a)
{
	//printf("%d\n",a);
	if(a==n)
	{
		if(s<step[a]) step[a] = s;
		else if(step[a]==-1) step[a] = s;
		return;
	}
	if(step[a+1]==-1 || s+1<step[a+1]&& a+1<=n)
	{
		step[a+1] = s+1;
		f(s+1,a+1);
	}
	if(step[a+stair[a]]==-1 || s+1<step[a+stair[a]] && a+stair[a]>=0 && a+stair[a]<=n) 
	{
		step[a+stair[a]] = s+1;
		f(s+1,a+stair[a]);
	}
}
int main()
{
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&stair[i]);
			step[i] = -1;
		}
		step[n] = -1;
		f(0,0);
		printf("%d\n",step[n]);
	}
	
	
	
	
	
	
	
	
	return 0;
}