#include<bits/stdc++.h>
using namespace std;
int n,x[200010][5],mxa,mxb;
vector < int > ans;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&x[i][j]);
		}
		sort(x[i],x[i]+3);
		mxa = max(mxa,x[i][0]);
		mxb = max(mxb,x[i][1]);
	}
	for(int i=0;i<n;i++)
	{
		if(x[i][2]>=mxb && x[i][1]>=mxa)
		{
			ans.push_back(i+1);
		}
	}
	printf("%d\n",ans.size());
	for(int i=0;i<ans.size();i++)
	{
		if(i) printf(" ");
		printf("%d",ans[i]);
	}
	printf("\n");
	return 0;
}