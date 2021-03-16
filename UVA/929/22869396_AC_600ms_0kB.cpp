#include<iostream>
#include<climits>
#include<queue>
#include<utility>
using namespace std;
int n,m,cnt,mat[1010][1010],m1[]={0,0,1,-1},m2[]={1,-1,0,0};
bool visit[1010][1010];
bool valid (int x, int y)
{
    //  printf("v : %d %d\n",x,y);
    if(x<0 || y<0) return 0;
    if(x>=n) return 0;
    if(y>=m) return 0;
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        cnt = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%d",&mat[i][j]);
                visit[i][j] = 0;
            }
        }
        priority_queue< pair < int , pair < int , int >  >  >pq;
        pq.push(make_pair(-1*mat[0][0],make_pair(0,0)));
        int nx,nv,ny;
        while(!pq.empty())
        {
            nx = pq.top().second.first;
            ny = pq.top().second.second;
            nv = pq.top().first;
            if(nx==n-1 && ny==m-1)
            {
                printf("%d\n",-1*nv);
                break;
            }
            pq.pop();
            for(int i=0;i<4;i++)
            {
                if(valid(nx+m1[i],ny+m2[i]) && !visit[nx+m1[i]][ny+m2[i]])
                {
                    pq.push(make_pair(nv-mat[nx+m1[i]][ny+m2[i]],make_pair(nx+m1[i],ny+m2[i])));
                    visit[nx+m1[i]][ny+m2[i]]=1;
                }
            }
        }
    }
    return 0;
}
