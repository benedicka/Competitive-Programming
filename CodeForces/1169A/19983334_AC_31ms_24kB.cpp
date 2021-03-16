#include <bits/stdc++.h>
using namespace std;
int n,a,x,b,y;
bool ok=0;
int main()
{
    scanf("%d %d %d %d %d",&n,&a,&x,&b,&y);
    while(1)
    {
        
        a++;
        b--;
        if(a==n+1) a = 1;
        if(b==0) b = n;
       // printf("%d %d\n",a,b);
        if(a==b) ok=1;
        if(a==x || b==y) break;
    }
    printf("%s\n",ok?"YES":"NO");
    return 0;
}
