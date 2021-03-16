#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stack>
#include<ctype.h>
using namespace std;
int ans,score,n,x[100010];
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&x[i]);
    ans = 0;
    score = 0;
    for(int i=0;i<n;i++)
    {
        if(x[i]>score || i==0)
        {
            score = x[i];
            ans = i+1;
        }
        else if(x[i]==score)
        {
            ans = -1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
