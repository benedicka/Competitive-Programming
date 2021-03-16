#include<bits/stdc++.h>
using namespace std;
int n,a[100010],ans,y;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    y = a[n-1];
    for(int i=0;i<n;i++) ans = max(ans,a[i]%y);
    printf("%d\n",ans);
    return 0;
}