#include<bits/stdc++.h>
using namespace std;
char a[2510],ans[2510];
int n,m,cnt,idx,l;
int main()
{
	scanf("%d %d",&n,&m);
	scanf("%s",&a);
	memset(ans,'\0',sizeof(ans));
	for(int i=0;i<2500;i++)
	{
		idx = i;
		for(int j=0;j<n;j++)
		{
			if(ans[idx]=='\0')
			{
				
				ans[idx] = a[j];
				l++;
				idx++;
			}
			else
			{
				if(ans[idx]!=a[j])
				{
					break;
				}
				else
				{
					idx++;
				}
			}
			if(j==n-1) m--;
		}
		if(m==0) break;
	}
	ans[l]  = '\0';
	printf("%s\n",ans);
	return 0;
}