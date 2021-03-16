#include<bits/stdc++.h>
using namespace std;
int t,n,q,a,b,x[100010],sparse[100010][20];
void buildtable()
{
	for(int i=0;i<n;i++)
	{
		sparse[i][0] = i;
	}
	for(int j=1;(1<<j)<=n;j++)
	{ 
        for (int i=0;(i+(1<<j)-1)<n;i++)
		{
            if (x[sparse[i][j-1]]<x[sparse[i+(1<<(j-1))][j-1]]) 
            {
            	sparse[i][j] = sparse[i][j-1]; 
			}
            else sparse[i][j] = sparse[i+(1<<(j-1))][j-1]; 
        } 
    } 
}
int query(int l,int r) 
{ 
	if(l>r) swap(l,r);
    int j = (int)log2(r - l + 1); 
    if (x[sparse[l][j]]<=x[sparse[r-(1<<j)+1][j]]) return x[sparse[l][j]]; 
    else return x[sparse[r-(1<<j)+1][j]]; 
} 
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		printf("Case %d:\n",tc);
		scanf("%d %d",&n,&q);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}
		buildtable();
		while(q--)
		{
			scanf("%d %d",&a,&b);
			printf("%d\n",query(a-1,b-1));
		}
	}
	return 0;
}