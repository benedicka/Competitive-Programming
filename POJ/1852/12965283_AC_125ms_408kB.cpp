#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        int l,n;
        scanf("%d %d",&l,&n);
        int mins=10000000000000000, maxs = 0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            mins=min(x,l-x);
            ans=max(mins,ans);
            maxs=max(maxs,max(x,l-x));
        }
        printf("%d %d\n",ans,maxs);
    }
    return 0;
}