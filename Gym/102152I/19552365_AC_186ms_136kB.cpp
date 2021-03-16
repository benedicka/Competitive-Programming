#include<bits/stdc++.h>
using namespace std;
int t,n,a,m,sum,x;
priority_queue < int > pq;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		while(!pq.empty()) pq.pop();
		scanf("%d %d",&n,&m);
		sum = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			pq.push(-1*a);
			sum+=a;
		}
		while(m--)
		{
			x = -1*pq.top();
			pq.pop();
			sum-=2*x;
			pq.push(x);
		}
		printf("%d\n",sum);
	}
	return 0;
}