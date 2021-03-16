#include<bits/stdc++.h>
using namespace std;
int ans,n,mx,x,t;

int main() 
{ 
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&mx);
		scanf("%d",&ans);
		for(int i=1;i<n;i++)
		{
			scanf("%d",&x);
			ans+=x;
		}	
		printf("%d\n",min(ans,mx));
	}
	return 0; 
} 