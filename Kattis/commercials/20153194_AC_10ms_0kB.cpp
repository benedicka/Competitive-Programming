#include<bits/stdc++.h>
using namespace std;
int n,p,ans,sum,x;
int main()
{
    scanf("%d %d",&n,&p);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        x-=p;
        sum+=x;
        ans = max(ans,sum);
        if(sum<=0) sum = 0;
    }
    printf("%d\n",ans);
    return 0;
}