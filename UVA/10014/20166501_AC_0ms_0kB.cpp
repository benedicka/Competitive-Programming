#include<iostream>
#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<climits>
#include<stack>
#include<queue>
#include<utility>
using namespace std;
double a0,an,c,ans;
int t,n;

int main()
{
    scanf("%d",&t);
    for(int tc=0;tc<t;tc++)
    {
        scanf("%d",&n);
        if(tc) printf("\n");
        scanf("%lf %lf",&a0,&an);
        ans = n*a0+an;
        for(int i=n;i>0;i--)
        {
            scanf("%lf",&c);
            ans-=(i*2)*c;
        }
        printf("%.2lf\n",ans/(n+1));
        
    }
    return 0;
}
