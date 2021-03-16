#include<bits/stdc++.h>
using namespace std;
int h,w,n,x,tree[1000040],ans;
void place(int node,int left,int right,int val)
{
	int mid,nd1,nd2;
//	printf("%d %d\n",left,right);
	if(left==right)
	{
		tree[node]+=val;
		//printf("cek %d %d = %d\n",left,right,tree[node]);
		ans = left;
		return;
	}
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	if(tree[nd1]+x<=w) place(nd1,left,mid,val);
	else if(tree[nd2]+x<=w) place(nd2,mid+1,right,val);
	tree[node] = min(tree[nd1],tree[nd2]);
}
int main()
{
	freopen("billboard.in","r",stdin);
	freopen("billboard.out","w",stdout);
	scanf("%d %d %d",&h,&w,&n);
	while(n--)
	{
		scanf("%d",&x);
		ans = -1;
		place(1,1,min(300000,h),x);
		printf("%d\n",ans);
	}	
	return 0;
}