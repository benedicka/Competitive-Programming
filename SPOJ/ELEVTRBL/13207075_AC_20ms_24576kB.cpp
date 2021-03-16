#include<stdio.h>
#include<queue>
using namespace std;
bool visit[1000010];
long long f,s,g,u,d,ans[1000010],dist,curr;
queue < int > q;
int main()
{
	scanf("%lld %lld %lld %lld %lld",&f,&s,&g,&u,&d);
	//printf("goal = %d\n",g);
	visit[s] = 1;
	ans[s] = 0;
	q.push(s);	
	while(!q.empty())
	{
		curr = q.front();
		if(curr+u<=f && !visit[curr+u])
		{
			q.push(q.front()+u);
			ans[q.front()+u] = ans[curr]+1;
			visit[q.front()+u] = 1;
		}
		if(curr-d>0 && !visit[curr-d])
		{
			q.push(q.front()-d);
			ans[q.front()-d] = ans[curr]+1;
			visit[q.front()-d] = 1;
		}
		//printf("%d\n",q.front());
		q.pop();
	}
	//for(int i = 0;i<f;i++) 	printf("ans[%d] = %d\n",i+1,ans[i+1]);
	if(visit[g]!=0) printf("%lld\n",ans[g]);
	else printf("use the stairs\n");
	return 0;
}