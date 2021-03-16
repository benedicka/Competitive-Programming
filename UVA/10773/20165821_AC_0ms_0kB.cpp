#include<iostream>
#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<climits>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
double v,u,d,l,ans;
int t;

int main()
{
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        printf("Case %d: ",tc);
        if(u<=0 || u<=v) printf("can't determine\n");
        else
        {
            l = sqrt(u*u - v*v);
            ans = d/l - d/u;
            if(ans>0 ) printf("%.3lf\n",ans);
            else printf("can't determine\n");
        }
    }
    return 0;
}
