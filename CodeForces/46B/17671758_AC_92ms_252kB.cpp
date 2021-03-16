#include<bits/stdc++.h>
using namespace std;
int ns,nm,nl,nxl,nxxl,k;
string lst[10],tmp;
map < string , int > mp;
map < string , int >mp1;
void pre()
{
	mp["S"] = ns;
	mp["M"] = nm;
	mp["L"] = nl;
	mp["XL"] = nxl;
	mp["XXL"] = nxxl;
	mp1["S"] = 0;
	mp1["M"] = 1;
	mp1["L"] = 2;
	mp1["XL"] = 3;
	mp1["XXL"] = 4;
	lst[0] = "S";
	lst[1] = "M";
	lst[2] = "L";
	lst[3] = "XL";
	lst[4] = "XXL";
}
int main()
{
	scanf("%d %d %d %d %d",&ns,&nm,&nl,&nxl,&nxxl);
	scanf("%d",&k);
	pre();
	while(k--)
	{
		cin>>tmp;
		if(mp[tmp]>0)
		{
			mp[tmp]--;
			cout<<tmp<<endl;
		}
		else
		{
			for(int i=1;i<5;i++)
			{
				if(mp1[tmp]+i<5)
				{
					if(mp[lst[mp1[tmp]+i]]>0)
					{
						mp[lst[mp1[tmp]+i]]-=1;
						cout<<lst[mp1[tmp]+i]<<endl;
						break;
					}
				}
				if(mp1[tmp]-i>=0)
				{
					if(mp[lst[mp1[tmp]-i]]>0)
					{
						mp[lst[mp1[tmp]-i]]-=1;
						cout<<lst[mp1[tmp]-i]<<endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}