#include <string>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <map>
#include <queue>
#include <math.h>
#include <climits>
using namespace std;
long long t,k,tmp,ans;
int main()
{
    
    scanf("%lld",&t);
    for(long long tc=0;tc<t;tc++)
    {
        scanf("%lld",&k);
        if(k<0) k*=-1;
        ans = tmp = 0;
        while(tmp<k || (tmp-k)%2==1 || ans==0)
        {
            
            ans++;
            tmp+=ans;
        }
        if(tc) printf("\n");
        printf("%lld\n",ans);
    }
    //getchar();
    return 0;
}

