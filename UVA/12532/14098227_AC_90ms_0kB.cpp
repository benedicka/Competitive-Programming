#include<stdio.h>
int a[100010],tree[400040],t,n,q,q1,q2,ans,x;
char input;
void build(int node,int left,int right)
{
	int mid,nd1,nd2;
	if(left==right)
	{
		tree[node] = a[left];
		return;
	}
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	build(nd1,left,mid);
	build(nd2,mid+1,right);
	tree[node] = tree[nd1]*tree[nd2];
}

int find(int node,int left,int right)
{
	int x,y,nd1,nd2,mid;
	if(left>=q1 && right<=q2) return tree[node];
	if(right<q1 || left>q2 ) return 1;
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	x = find(nd1,left,mid);
	y = find(nd2,mid+1,right);
	return x*y;
}
void update(int left,int right,int node,int target,int val)
{
	//printf("%d %d\n",left,right);
	int mid,nd1,nd2;
	if(left==target && right==target)
	{
		tree[node] = val;
		a[left] = val;
	}
	else
	{
		mid = (left+right)/2;
		nd1 = 2*node;
		nd2 = nd1+1;
		if(target<=mid)
		{
			update(left,mid,nd1,target,val);
		}
		else update(mid+1,right,nd2,target,val);
		tree[node] = tree[nd1]*tree[nd2];
	}
}
int main()
{
	while(scanf("%d %d",&n,&q)!=EOF)
	{
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&x);
			if(x>0) a[i] = 1;
			else if(x<0) a[i] = -1;
			else a[i] = 0;
		}
//		for(int i=1;i<=n;i++) printf("%d ",a[i]);
//		printf("\n");
		build(1,1,n);
		while(q--)
		{
			getchar();
			scanf("%c %d %d",&input,&q1,&q2);
			//printf("%c %d %d\n",input,q1,q2);
			if(input=='P')
			{
				ans = find(1,1,n);
				if(ans==0) printf("0");
				else if(ans>0) printf("+");
				else printf("-");
			}
			else
			{
				if(q2>0) q2 = 1;
				else if(q2<0) q2= -1; 
				update(1,n,1,q1,q2);
//				printf("update = ");
//				for(int i=1;i<=n;i++) printf("%d ",a[i]);
//				printf("\n");
			}
		}
		printf("\n");
	}
	
	return 0;
}