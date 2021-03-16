#include<iostream>
#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<climits>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
int cnt,ans,n,x;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        cnt+=x;
        if(cnt<0)
        {
            cnt = 0;
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
