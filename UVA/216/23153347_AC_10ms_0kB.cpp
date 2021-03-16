#include <bits/stdc++.h>
using namespace std;
int n,a[10],p[10],tc=1;
double mn = -1, tmp,x[10],y[10];
double dist(double x,double y)
{
    return(sqrt(x*x+y*y));
}
int main()
{
    while(scanf("%d", &n)!=EOF) 
    {
        if(n==0) break;
        for(int i=0;i<n;i++)
        {
            scanf("%lf %lf", &x[i], &y[i]);
            p[i] = i;
        }
        mn = -1;
        do 
        {
            double sum = 0;
            for(int i=1;i<n;i++) 
            {
                tmp=dist(x[p[i]]-x[p[i-1]],y[p[i]]-y[p[i-1]]) +16.0;
                sum+=tmp;
            }
            if(sum<mn || mn<0) 
            {
                mn=sum;
                for(int i=0;i<n;i++)
                {
                    a[i] = p[i];
                }
            }
        } while(next_permutation(p,p+n));
        printf("**********************************************************\n");
        printf("Network #%d\n",tc++);
        for(int i=1;i<n;i++)
        {
            tmp = dist(x[a[i]]-x[a[i-1]],y[a[i]]-y[a[i-1]]) +16.0;
            printf("Cable requirement to connect (%d,%d) to (%d,%d) is %.2lf feet.\n",(int)x[a[i-1]],(int)y[a[i-1]],(int)x[a[i]],(int)y[a[i]],tmp);
        }
        printf("Number of feet of cable required is %.2lf.\n", mn);
    }
    return 0;
}