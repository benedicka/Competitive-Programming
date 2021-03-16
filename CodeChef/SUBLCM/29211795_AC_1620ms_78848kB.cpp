#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e6;
vector < int > fact[mxN+5];
int t,n,a[100010],ans,cnt,l,r,id[mxN+5],tmp,dp[mxN+5]; 
void pre()
{
	for(int i=2;i<=mxN;i++)
	{
		if(fact[i].size()==0)
		{
			for(int j=i;j<=mxN;j+=i)
			{
				fact[j].push_back(i);
			}
		}
	}
}

int main()
{
	pre();
//	printf("%d\n",cnt);
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		l = r = 0;
		ans = 1;
		memset(id,-1,sizeof(id));
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++)
		{
			tmp = -1;
			scanf("%d",&a[i]);
			for(int j=0;j<fact[a[i]].size();j++)
			{
				if(id[fact[a[i]][j]]!=-1) tmp = max(tmp,id[fact[a[i]][j]]+1);
				id[fact[a[i]][j]] = i;
			}
			dp[i] = i?max(dp[i-1],tmp):0;
			ans = max(ans,i-dp[i]+1);
		}
//		printf("dp : \n");
//		for(int i=0;i<n;i++)
//		{
//			printf("%d ",dp[i]);
//		}
//		printf("\n");
		printf("%d\n",ans==1?-1:ans);	
	}
	
	return 0;
}