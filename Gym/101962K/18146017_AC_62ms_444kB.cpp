#include<bits/stdc++.h>
using namespace std;
int prefix[50010],n,a,ans,tmp,mx,st;
bool done;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		prefix[i] = prefix[i-1]+a;
	}
	for(int i=1;i<=n;i++)
	{
		int turn = 1;
		ans = 0;
		done = 0;
		st = i;
		mx = i;
		while(st<=n)
		{
			mx =st +  3*turn-1;
			if(mx>=n)
			{
				done = 1;
				mx = n;	
			}
			tmp = prefix[mx]-prefix[st-1];
			//if(i==2) printf("%d %d tmp = %d\n",st,mx,tmp);
			if(tmp>0)ans+=tmp;
			if(done) break;
			st = mx+1;
			turn+=1;
		}
		printf("%d\n",ans);
	}
	return 0;
}