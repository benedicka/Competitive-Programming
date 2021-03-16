#include<bits/stdc++.h>
using namespace std;
int n,cnt,x;
int sum(int x)
{
    int res=0;
    while(x!=0)
    {
        res+=x%10;
        x/=10;
    }
    return res;
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        cnt = 11;
        if(n==0) break;
        x = sum(n);
        while(x!=sum(n*cnt))
        {
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}