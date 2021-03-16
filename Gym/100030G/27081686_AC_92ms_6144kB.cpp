#include<bits/stdc++.h>
using namespace std;
int n,k,c,ans[200010];
pair < int , int > p[200010];

int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	scanf("%d %d",&k,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&c);
		p[i] = make_pair(c,i);
	}
	sort(p,p+n);
	for(int i=0;i<n;i++)
	{
		if(k<=0) break;
		ans[p[i].second] = min(k,p[i].first);
		k-=p[i].first;	
	
	}
	for(int i=0;i<n;i++)
	{
		if(i)printf(" ");
		printf("%d",ans[i]);
	}
	printf("\n");
	return 0;
}