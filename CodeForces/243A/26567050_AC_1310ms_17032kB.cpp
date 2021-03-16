#include<bits/stdc++.h>
using namespace std;
int ans,n,x[100010],tmp,tmp2;
map < int , bool > mp;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(!mp[x[i]]) ans++;
		mp[x[i]]++;
		tmp = x[i];
		tmp2 = 0;
		for(int j=i+1;j<n;j++)
		{
			tmp|=x[j];
			if(!mp[tmp]) ans++;
			mp[tmp]++;
			tmp2|=x[j];
			if(!mp[tmp2]) ans++;
			mp[tmp2]++;
			if(tmp == tmp2)
			{
				break;
			} 
		}
	}
	printf("%d\n",ans);
	return 0;
}