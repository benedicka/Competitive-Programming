#include <string>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int c,n,m,dp[10010],s[10010],p[10010];

int main()
{
    scanf("%d %d %d",&c,&n,&m);
    for(int i=0;i<n;i++) scanf("%d %d",&s[i],&p[i]);
    memset(dp,-1,sizeof(dp));
    dp[0] = 0;
    for(int i=0;i<n;i++)
    {
        
        for(int j=c;j>=0;j--)
        {
            if(j-s[i]<0) continue;
            if(dp[j-s[i]]==-1) continue;
            dp[j] = max(dp[j],dp[j-s[i]]+p[i]);
        }
    }
    
    for(int i=1;i<=c;i++)
    {
        dp[i] = max(dp[i],dp[i-1]);
    }
//    for(int i=1;i<=c;i++)
//    {
//        printf("%d ",dp[i]);
//    }
//    printf("\n");
    for(int i=1;i<=m;i++)
    {
        printf("%d\n",i*dp[c/i]);
    }
    return 0;
}
