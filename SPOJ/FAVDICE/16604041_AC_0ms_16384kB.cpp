#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double n,sum[1010];
    sum[0] = 0;
    int t;
    for(int i=1;i<=1000;i++)
    {
        sum[i] = sum[i-1]+(double)1/i;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&n);
        n = n*sum[(int)n];
        printf("%.2lf\n",n);
    }
    return 0;
}
