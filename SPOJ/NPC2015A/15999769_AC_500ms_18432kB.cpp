#include<bits/stdc++.h>
using namespace std;
vector < int > idx[30];
char x,y;
int ans[30][30];
int l,n,a,b;
bool ada;
int main()
{
	while(1)
	{
		x = getchar();
		if(x=='\n') break;
		idx[x-'A'].push_back(l+1);
		l++;
	}
	scanf("%d",&n);getchar();
	for(int i=0;i<n;i++)
	{
		scanf("%c %c",&x,&y);getchar();
		a = x-'A';
		b = y-'A';
		//printf("cek : %c %c\n",x,y);
		if(idx[a].size()==0 || idx[b].size()==0) printf("TIDAK\n");
		else
		{
			if(ans[a][b]==0)
			{
				ada = 0;
				int sz = idx[a].size();
				for(int i=0;i<sz;i++)
				{
					int f,l,m,r;
					l = 0;
					r = idx[b].size() - 1;
					while(l<=r)
					{
						m = (l+r)/2;
						//printf("%d %d\n",idx[a][i],idx[b][m]);
						if(idx[b][m]>idx[a][i]) 
						{
							ada = 1;
							break;
						}
						else l = m+1;
					}
				}
				if(ada)ans[a][b] = 1;
				else ans[a][b] = 2;
				if(ada) printf("YA\n");
				else printf("TIDAK\n");
			}
			else if(ans[a][b]==1) printf("YA\n");
			else printf("TIDAK\n");
		}
	}
	return 0;
}