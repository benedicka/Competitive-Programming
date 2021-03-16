#include<stdio.h>
#include<vector>
using namespace std;
int n,a,b,step,size,c;
bool ok;
vector < int > map[10010];
void dfs(int parent,int adj,int s)
{
	//printf("%d %d\n",parent,adj);
	if(s>step)
	{
		c = adj;
		step = s;
	}
	
	for(int i=0;i<map[adj].size();i++)
	{
		if(map[adj][i]!=parent) 
		{
			//if(adj==2) printf("i = %d parent = %d\n",i,parent);
			dfs(adj,map[adj][i],s+1);
		}
	
	}
	return;
}


int main()
{
	ok = 0;
	scanf("%d",&n);
	n--;
	step = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		a--;
		b--;
		//printf("%d %d\n",a,b);
		map[a].push_back(b);
		map[b].push_back(a);
	}
//	printf("n = %d\n",n);
//	for(int i=0;i<=n;i++)
//	{
//		printf("%d :",i);
//		for(int j=0;j<map[i].size();j++)
//		{
//			printf("%d ",map[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
	dfs(0,0,0);
	dfs(c,c,0);
	printf("%d\n",step);
	
	return 0;
}