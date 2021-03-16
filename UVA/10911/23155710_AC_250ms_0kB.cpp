#include<bits/stdc++.h>
using namespace std;
long long n,tc=1;
char st[30];
double x[20],y[20],dp[70000];
double dist(int ida,int idb)
{
    double a=x[ida]-x[idb],b=y[ida]-y[idb];
    return sqrt(a*a+b*b);
}
double f(int mask,int jum)
{
    int newmask;
    //printf("%d %d\n",mask,jum);
    if(jum>=n) return 0;
    if(dp[mask]!=-1) return dp[mask];
    double tmp = -1;
    for(int i=0;i<n;i++)
    {
        if( !(mask&(1<<i)) )
        {
            newmask = mask|(1<<i);
            for(int j=i+1;j<n;j++)
            {
                 if(!(mask&(1<<j)))
                 {
                     if(tmp==-1) tmp = dist(i,j)+ f(newmask|(1<<j),jum+2);
                     else tmp = min(tmp , dist(i,j)+ f(newmask|(1<<j),jum+2) );
                 }
            }
        }
    }
    return dp[mask] = tmp;
}
int main()
{
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0) break;
        n*=2;
        for(int i=0;i<n;i++)
        {
           scanf("%s %lf %lf",&st,&x[i],&y[i]);
          // printf("%lf %lf\n",x[i],y[i]);
        }
        for(int i=0;i<=(1<<n)-1;i++) dp[i] = -1.0;
        printf("Case %lld: %.2lf\n",tc++,f(0,0));
    }
	return 0;
}