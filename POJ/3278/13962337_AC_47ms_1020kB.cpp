#include<stdio.h>
#include<algorithm>
#include<queue>
using namespace std;
int n,k,a[100010],curr;
int main()
{
	queue < int > q;
	scanf("%d %d",&n,&k);
	for(int i=0;i<=100000;i++)
	{
		a[i] = -1;
	}
	a[n] = 0;
	q.push(n);
	while(!q.empty())
	{
		curr = q.front();
		if(curr+1<=100000 && a[curr+1]==-1)
		{
			q.push(curr+1);
			a[curr+1] = a[curr]+1;
		}
		if(curr-1>=0 && a[curr-1]==-1)
		{
			q.push(curr-1);
			a[curr-1] = a[curr]+1;
		}
		if(2*curr<=100000 && a[2*curr]==-1)
		{
			q.push(curr*2);
			a[curr*2] = a[curr]+1;
		}
		q.pop();
	}
	printf("%d\n",a[k]);
	return 0; 
}