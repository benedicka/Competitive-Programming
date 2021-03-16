#include<bits/stdc++.h>
using namespace std;
int n,cnt[3];
char x[100010];
 
int main()
{
	scanf("%d",&n);
	scanf("%s",&x);
	for(int i=0;i<n;i++)
	{
		cnt[x[i]!='L']++;
	}	
	cnt[0]*=-1;
	printf("%d\n",cnt[1]-cnt[0]+1);
	return 0;
}