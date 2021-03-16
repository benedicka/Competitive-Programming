#include <bits/stdc++.h>
using namespace std;
string str;
int q,a,l,r,cntAns,tree[500010];
char c;
void updateT(int nd1,int nd2, int node)
{
	tree[node] = tree[nd1]|tree[nd2];
}
void build(int node, int left, int right)
{
//	printf("%d %d\n",left,right);
    if(left==right)
	{
        tree[node] = (1<<(str[left-1]-'a'));
        //cout<<node<<" "<<left<<" "<<right<<" "<<tree[node]<<endl;
        return;
    }
    int nd1,nd2,mid;
    mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	build(nd1,left,mid);
	build(nd2,mid+1,right);
	updateT(nd1,nd2,node);
	//cout<<node<<" "<<left<<" "<<right<<" "<<tree[node]<<endl;
}


void update(int node,int left,int right,int leftT,int rightT,char chr)
{
	//printf("%d %d\n",left,right);
	int nd1,nd2,mid;
	if(left>rightT || right<leftT) return;
	if(left >= leftT && right<=rightT)
	{
		tree[node] = (1<<(chr-'a'));
		return;
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	update(nd1,left,mid,leftT,rightT,chr);
	update(nd2,mid+1,right,leftT,rightT,chr);
	updateT(nd1,nd2,node);
}
int find(int node,int left,int right,int leftT,int rightT)
{
	//printf("%d %d\n",left,right);
	int nd1,nd2,mid;
	if(left>rightT || right<leftT) return 0;
	if(left >= leftT && right <=rightT)
	{
		return tree[node];
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	return find(nd1,left,mid,leftT,rightT)|find(nd2,mid+1,right,leftT,rightT);
}
int main()
{ 
	cin>>str;
	build(1,1,str.size());
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				scanf("%d %c\n",&l,&c);
				update(1,1,str.size(),l,l,c);
				break;
			case 2:
				scanf("%d %d",&l,&r);
				int ans = find(1,1,str.size(),l,r);
				cntAns = 0;
				for(int i=0;i<26;i++)
				{
					if(ans&(1<<i)) cntAns++;
				}
				printf("%d\n",cntAns);
				break;
		}
	}
    return 0;
}