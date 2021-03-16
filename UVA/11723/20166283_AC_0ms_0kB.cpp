#include<iostream>
#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<climits>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
int n,r,ans,tc;

int main()
{
    while(scanf("%d %d",&n,&r)!=EOF)
    {
        if(n==0 && r==0) break;
        tc++;
        ans = (n-1)/r;
        printf("Case %d: ",tc);
        if(ans>26) printf("impossible\n");
        else printf("%d\n",ans);
    }
    return 0;
}
