#include<string.h>
#include<stdio.h>
char x[100010];
void dfs(int l,int r)
{
    int st = r;
    while(st>=l && x[st]!=']' && x[st]!='[') st--;
    if(x[st]==']') dfs(l,st-1);
    for(int i=st+1;i<=r;i++)
    {
        printf("%c",x[i]);
    }
    if(x[st]=='[') dfs(l,st-1);
}
int main()
{
    while(scanf("%s",&x)!=EOF)
    {
        dfs(0,strlen(x)-1);
        printf("\n");
    }
    return 0;
}