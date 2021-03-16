#include <string>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <map>
#include <queue>
#include <climits>
using namespace std;
int n,m,s,t,ans[3][100010],a,b,tmp;
queue< pair < int , int > > q;
vector < int > adj[100010];
bool num[1100010],visit[2][100010];
void pre()
{
    num[1] = 1;
    num[0] = 1;
    num[2] = 0;
    for(int i=2;i<=1100003;i+=2) num[i] = 1;
    for(int i=3;i*i<=1100003;i+=2)
    {
        if(!num[i])
        {
            for(int j=i*i;j<=1100003;j+=i)
            {
                num[j] = 1;
            }
        }
    }
}
int main()
{
    pre();
    scanf("%d %d %d %d",&n,&m,&s,&t);
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    q.push(make_pair(0,s));
    visit[0][s] = 1;
    while(!q.empty())
    {
        a = q.front().first;
        b = q.front().second;
        tmp = ans[a][b]+1;
        q.pop();
        for(int i=0;i<(int)adj[b].size();i++)
        {
            if(!visit[tmp%2][adj[b][i]])
            {
                visit[tmp%2][adj[b][i]] = 1;
                q.push( make_pair(tmp%2,adj[b][i]) );
                ans[(tmp)%2][adj[b][i]] = tmp;
            }
        }
       
    }
    if(ans[0][t]==2) printf("2\n");
    else if(!visit[1][t]) printf("-1\n");
    else
    {
        tmp = ans[1][t];
        while(num[tmp]==1)
        {
            tmp+=2;
        }
        printf("%d\n",tmp);
    }
    return 0;
}

