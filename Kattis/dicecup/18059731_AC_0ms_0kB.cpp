#include <bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    scanf("%d %d",&a,&b);
    if(b<a) swap(a,b);
    for(int i=a;i<=b;i++)
    {
        printf("%d\n",i+1);
    }
    return 0;
}