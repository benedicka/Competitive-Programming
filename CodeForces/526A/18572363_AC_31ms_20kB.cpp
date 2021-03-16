#include<bits/stdc++.h>
using namespace std;
int n,cnt,idx;
char x[110];
bool ok;
int main()
{
	scanf("%d %s",&n,&x);
	for(int i=1;i<=n/4;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(x[j]=='*')
			{
				cnt = 0;
				idx = j;
				while(idx+i<n && cnt<4)
				{
					idx+=i;
					if(x[idx]!='*') break;
					cnt++;
				}
				if(cnt>=4)
				{
					//printf("%d\n",i);
					ok = 1;
					break;
				}
			}			
		}		
	}
	printf("%s\n",ok?"yes":"no");
	return 0;
}