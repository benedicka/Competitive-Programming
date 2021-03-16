#include<stdio.h>
#include<stdlib.h>
long long k,m,ans,diff,h,mn,x;
int main()
{
    while(scanf("%lld %lld",&k,&m)!=EOF)
    {
         diff = abs(k-m);
        ans = (43200*(86400-m)/diff)%43200 + 30;
        h = (ans/3600)%12;
        mn = (ans/60)%60;
        if(h==0) h = 12;
        printf("%lld %lld %02lld:%02lld\n",k,m,h,mn);
    }
   
    return 0;
}