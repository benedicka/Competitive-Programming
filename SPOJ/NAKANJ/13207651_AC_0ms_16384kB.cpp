#include<stdio.h>
#include<queue>
#include<utility>
using namespace std;
int ans[10][10];
char a[5],b[5];
int s1,s2,f1,f2,curr_s,curr_f;
bool visit[10][10];
queue < pair < int , int > > q;
pair < int , int > curr;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
		for(int j = 0;j<8;j++)
		{
			for(int k=0;k<8;k++)
			{
				visit[j][k] = 0;
			}
		}
		scanf("%s %s",a,b);	
		s1 = a[0]-'a';
		f1 = a[1]-'1';
		s2 = b[0]-'a';
		f2 = b[1]-'1';
//		printf("start = %d %d",s1,f1);
//		printf(" finish = %d %d\n",s2,f2);
		visit[s1][f1] = 1;
		ans[s1][f1] = 0;
		q.push(make_pair(s1,f1));
		while(!q.empty())
		{
			curr = q.front();
			curr_s = curr.first;
			curr_f = curr.second;
			if(curr_s+2<8 && curr_f+1<8 && visit[curr_s+2][curr_f+1]==0) 
			{
				visit[curr_s+2][curr_f+1]=1;
				ans[curr_s+2][curr_f+1] = ans[curr_s][curr_f]+1;
				q.push(make_pair(curr_s+2,curr_f+1));
			}
			if(curr_s-2>=0 && curr_f-1>=0 && visit[curr_s-2][curr_f-1]==0) 
			{
				visit[curr_s-2][curr_f-1]=1;
				ans[curr_s-2][curr_f-1] = ans[curr_s][curr_f]+1;
				q.push(make_pair(curr_s-2,curr_f-1));
			}
			if(curr_s+1<8 && curr_f+2<8 && visit[curr_s+1][curr_f+2]==0) 
			{
				visit[curr_s+1][curr_f+2]=1;
				ans[curr_s+1][curr_f+2] = ans[curr_s][curr_f]+1;
				q.push(make_pair(curr_s+1,curr_f+2));
			}
			if(curr_s-1>=0 && curr_f-2>=0 && visit[curr_s-1][curr_f-2]==0) 
			{
				visit[curr_s-1][curr_f-2]=1;
				ans[curr_s-1][curr_f-2] = ans[curr_s][curr_f]+1;
				q.push(make_pair(curr_s-1,curr_f-2));
			}
		
		
			if(curr_s+2<8 && curr_f-1>=0 && visit[curr_s+2][curr_f-1]==0) 
			{
				visit[curr_s+2][curr_f-1]=1;
				ans[curr_s+2][curr_f-1]= ans[curr_s][curr_f]+1;
				q.push(make_pair(curr_s+2,curr_f-1));
			}
			if(curr_s-2>=0 && curr_f+1<8 && visit[curr_s-2][curr_f+1]==0) 
			{
				visit[curr_s-2][curr_f+1]=1;
				ans[curr_s-2][curr_f+1] = ans[curr_s][curr_f]+1;
				q.push(make_pair(curr_s-2,curr_f+1));
			}
			if(curr_s+1<8 && curr_f-2>=0 && visit[curr_s+1][curr_f-2]==0) 
			{
				visit[curr_s+1][curr_f-2]=1;
				ans[curr_s+1][curr_f-2] = ans[curr_s][curr_f]+1;
				q.push(make_pair(curr_s+1,curr_f-2));
			}
			if(curr_s-1>=0 && curr_f+2<8 && visit[curr_s-1][curr_f+2]==0) 
			{
				visit[curr_s-1][curr_f+2]=1;
				ans[curr_s-1][curr_f+2] = ans[curr_s][curr_f]+1;
				q.push(make_pair(curr_s-1,curr_f+2));
			}
			q.pop();
		}
//		for(int i=0;i<8;i++)
//		{
//			for(int j=0;j<8;j++)
//			{
//				printf("%d",ans[i][j]);
//			}
//			printf("\n");
//		}
		printf("%d\n",ans[s2][f2]);
	}
	
	
	
	
	return 0;
}