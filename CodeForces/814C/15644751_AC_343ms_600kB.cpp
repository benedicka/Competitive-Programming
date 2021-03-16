#include<bits/stdc++.h>
using namespace std;
map < char , int >jum;;
char x[10510];
int len,n,q,l,r,cnt,idx[30];
pair < int , int >mp[30][1510];
char car;
bool cmp(pair < int , int > a,pair <int , int > b)
{
	return  a.first<b.first;
}
int main()
{
	scanf("%d",&len);getchar();
	for(int i=0;i<len;i++)
	{
		x[i] = getchar();
		jum[x[i]]++;
	}
	bool ada[30][1510];
	int pos[30][1510];
	for(int c='a';c<='z';c++)
	{
		if(jum[c]>=1)
		{
			for(int i=0;i<len;i++)
			{
				if(x[i]==c)
				{
					cnt = 1;
					for(int j=i+1;j<len;j++)
					{
						if(x[j]==c)
						{	
							cnt++;
							if(!ada[c-'a'][j-i+1-cnt])
							{
								mp[c-'a'][idx[c-'a']] = make_pair(j-i+1-cnt,cnt);
								idx[c-'a']++;
								ada[c-'a'][j-i+1-cnt] = 1;
								pos[c-'a'][j-i+1-cnt] = idx[c-'a']-1;
							}
							else 
							{
								mp[c-'a'][pos[c-'a'][j-i+1-cnt]].second = max(mp[c-'a'][pos[c-'a'][j-i+1-cnt]].second ,cnt);
							}
						}
					}
				}
			}
			sort(mp[c-'a'],mp[c-'a']+idx[c-'a'],cmp);
		}
	}
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d %c",&n,&car);
		if(jum[car]==0) printf("%d\n",n);
		else if(jum[car]==1) printf("%d\n",n+1>len?len:n+1);
		else if(n>=len || n+jum[car]>=len) printf("%d\n",len);
		else
		{
			int ans = 0;
			for(int i=0;i<idx[car-'a'];i++)
			{
				cnt = mp[car-'a'][i].second;
				if(mp[car-'a'][i].first<=n)
				{
					ans = max(ans,n+cnt);
				}
				else break;
			}
			if(ans==0) ans = n+1;
			printf("%d\n",ans>len?len:ans);
		}
	}
	return 0;
}