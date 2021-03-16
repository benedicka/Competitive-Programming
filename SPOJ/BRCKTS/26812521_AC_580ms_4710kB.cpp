#include <bits/stdc++.h>
using namespace std;

struct data
{
    int buka;
    int tutup;
}tree[500010];
char str[500010];
int t,n,q,k;
void updateT(int nd1,int nd2,int node)
{
	tree[node].buka = tree[nd1].buka+tree[nd2].buka-min(tree[nd1].buka,tree[nd2].tutup);
	tree[node].tutup =tree[nd1].tutup+tree[nd2].tutup-min(tree[nd1].buka,tree[nd2].tutup);
}
void build(int node, int left, int right)
{
//	printf("%d %d\n",left,right);
    if(left==right)
	{
        if(str[left-1]=='(')
		{      
            tree[node].buka = 1;
            tree[node].tutup = 0;
        }
        else
		{
            tree[node].buka = 0;
            tree[node].tutup = 1;
        }
     //   printf("%d b %d t %d\n",left,tree[node].buka,tree[node].tutup);
        return;
    }
    int nd1,nd2,mid;
    mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	build(nd1,left,mid);
	build(nd2,mid+1,right);
	updateT(nd1,nd2,node);
	//printf("%d %d b %d t %d\n",left,right,tree[node].buka,tree[node].tutup);
}

void update(int node,int left,int right,int target)
{
	//printf("%d %d\n",left,right);
	int nd1,nd2,mid;
	if(left>target || right<target) return;
	if(left == target && right==target)
	{
		swap(tree[node].buka,tree[node].tutup);
		return;
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	update(nd1,left,mid,target);
	update(nd2,mid+1,right,target);
	updateT(nd1,nd2,node);
}
int main()
{ 
    for(int i=1;i<=10;i++)
	{
        scanf("%d",&n);
        cin>>str;
	    build(1,1,n);
        scanf("%d",&q);
		printf("Test %d:\n",i);
        while(q--)
		{
            scanf("%d",&k);
            if(!k) printf("%s\n",(tree[1].tutup==0&&tree[1].buka==0)?"YES":"NO");
            else update(1,1,n,k);
        }
    }
    return 0;
}