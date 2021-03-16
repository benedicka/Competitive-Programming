#include<bits/stdc++.h>
using namespace std;
int x,y,ans[1000010]={0},cnt[50],n,t,tmp;

int main()
{
    for(int i=0;i<1000000;i++)
    {
    	x = y = 0;
       	x += i/100000;
		x += (i/10000) % 10;
		x += (i/1000) % 10;
		y += (i/100) % 10;
		y += (i/10) % 10;
		y += i % 10;
		tmp = abs(x-y);
		cnt[tmp]++;
       	for(int j=0;j<tmp;j++)
        {
            ans[i]+=cnt[j];
        }
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",ans[n]);
    }
    return 0;
}