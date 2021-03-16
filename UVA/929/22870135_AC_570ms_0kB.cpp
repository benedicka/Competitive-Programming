#include<iostream>
using namespace std;
int n,m,cnt,mat[1010][1010],m1[]={0,0,1,-1},m2[]={1,-1,0,0};
bool visit[1010][1010];
struct data
{
    int v,x,y;
}heap[500010];
bool valid (int x, int y)
{
    //  printf("v : %d %d\n",x,y);
    if(x<0 || y<0) return 0;
    if(x>=n) return 0;
    if(y>=m) return 0;
    return 1;
}
void insert(int psx,int psy,int psv)
{
    cnt++;
    heap[cnt].v=psv;
    heap[cnt].x=psx;
    heap[cnt].y=psy;
    int Idx=cnt;
    while(Idx!=1 && heap[Idx/2].v>heap[Idx].v)
    {
        data temp=heap[Idx];
        heap[Idx]=heap[Idx/2];
        heap[Idx/2] = temp;
        Idx = Idx/2;
    }
    
}
void heapDown(int Idx)
{
    int curIdx= Idx;
    int curHeap = heap[Idx].v;
    if((2*Idx)<=cnt && curHeap>heap[Idx*2].v){
        curIdx = Idx*2;
        curHeap =heap[Idx*2].v;
    }
    if((2*Idx+1)<=cnt && curHeap>heap[Idx*2+1].v){
        curIdx = Idx*2+1;
        curHeap =heap[Idx*2+1].v;
    }
    if(curIdx==Idx){
        return;
    }
    data temp= heap[curIdx];
    heap[curIdx] = heap [Idx];
    heap [Idx] = temp;
    heapDown(curIdx);
}

data gettop()
{
    if(cnt==1){
        cnt--;
        return heap[1];
    }
    data rootValue=heap[1];
    heap[1]=heap[cnt];
    cnt--;
    heapDown(1);
    return rootValue;
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
        insert(0,0,mat[0][0]);
        while(cnt!=0)
        {
            data tmp = gettop();
            if(tmp.x==n-1 && tmp.y==m-1)
            {
                printf("%d\n",tmp.v);
                break;
            }
            //printf("%d %d %d\n",tmp.x,tmp.y,tmp.v);
            for(int i=0;i<4;i++)
            {
                
                if(valid(tmp.x+m1[i],tmp.y+m2[i]) && !visit[tmp.x+m1[i]][tmp.y+m2[i]])
                {
                    //   printf("c : %d %d %d\n",tmp.x+m1[i],tmp.y+m2[i],mat[tmp.x+m1[i]][tmp.y+m2[i]]);
                    visit[tmp.x+m1[i]][tmp.y+m2[i]] = 1;
                    insert(tmp.x+m1[i],tmp.y+m2[i],tmp.v+mat[tmp.x+m1[i]][tmp.y+m2[i]]);
                }
            }
            
        }
    }
    return 0;
}
