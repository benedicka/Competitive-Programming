#include<bits/stdc++.h>
using namespace std;
int n,m,k,a,cnt,tmp;
priority_queue < int > pq;
int main()
{
	scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		pq.push(a);
	}
	while(cnt<k)
	{
		pq.pop();
		pq.push(m);
		cnt++;
	}
	printf("%s\n",pq.top()==m?"YES":"NO");
	return 0;
}