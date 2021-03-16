#include<stdio.h>
#include<queue>
#include<utility>
using namespace std;
int m1[4] = {1,-1,0,0};
int m2[4] = {0,0,1,-1};
int m,n,t,s1,s2,f1,f2,q;
char x[1010][1010],y[1010][1010],z;
bool visit[1010][1010];
void fill(int a,int b)
{
	visit[a][b] = 1;
	y[a][b] = z;
	for(int i=0;i<4;i++)
	{
		if(a+m1[i]>=0 && a+m1[i]<=m-1 && b+m2[i]>=0 && b+m2[i]<=n-1 && visit[a+m1[i]][b+m2[i]]==0 && x[a+m1[i]][b+m2[i]]==q )
		{
			fill(a+m1[i],b+m2[i]);
		}
	}
}

int main()
{
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        scanf("%s",&x[i]);
    }
    z = 'a';
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(visit[i][j]==0)
    		{
    			q = x[i][j];
    			fill(i,j);
    			z++;
			}
		}
	}
    scanf("%d",&t);
    while(t--)
    {
        
        scanf("%d %d %d %d",&s1,&s2,&f1,&f2);
        s1-=1;
        s2-=1;
        f1-=1;
        f2-=1;
        if(y[s1][s2]==y[f1][f2])
        {
            if(x[s1][s2]=='1') printf("decimal\n");
            else printf("binary\n");
        }
        else
        {
            printf("neither\n");
        }
        
    }
    return 0;
}