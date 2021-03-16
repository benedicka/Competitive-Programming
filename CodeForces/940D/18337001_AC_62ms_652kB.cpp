#include<bits/stdc++.h>
using namespace std;
int n,a[100010],l=-1*1e9,r=1e9,mx,mn;
string b;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	cin>>b;
	for(int i=4;i<n;i++)
	{
		if(b[i]!=b[i-1])
		{
			if(b[i-1] =='0' && b[i-2]=='0' && b[i-3]=='0'&& b[i-4]=='0')
			{
				for(int j=i-4;j<=i;j++)
				{
					l = max(l,a[j]+1);
				}
				
			}
			else if(b[i-1] =='1'&& b[i-2]=='1' && b[i-3]=='1'&& b[i-4]=='1')
			{
				for(int j=i-4;j<=i;j++)
				{
					r = min(r,a[j]-1);
				}
				
			}
		}
	}
	printf("%d %d\n",l,r);
	return 0;
}