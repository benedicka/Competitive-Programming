#include<bits/stdc++.h>
using namespace std;
int n,cost[1010],ans,a,b,c,dp[1010][1010];
priority_queue < pair < int , pair < int , int > > > pq;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&cost[i]);
    }
    memset(dp,-1,sizeof(dp));
    pq.push(make_pair(0,make_pair(1,0)));
    while(!pq.empty())
    {
        a = pq.top().first;
        b = pq.top().second.first;
        c = pq.top().second.second;
        pq.pop();
        if(dp[b][c]==-1 || dp[b][c]>= -1*a)
        {
            dp[b][c] = -1*a;
           if(b==n)
            {
                ans = a;
                break;
            }
            if(b+c+1<=n)
            {
                pq.push(make_pair(a-cost[b+c+1],make_pair(b+c+1,c+1)));
            }
            if(b-c>=1 && c!=0)
            {
                pq.push(make_pair(a-cost[b-c],make_pair(b-c,c)));
            } 
        }
    }
    printf("%d\n",-1*ans);
    return 0;
}