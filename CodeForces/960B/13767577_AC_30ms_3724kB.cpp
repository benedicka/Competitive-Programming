#include<queue>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	long long a,b,n,ans,move,cek,z[1010];
	priority_queue < long long >  pq;
	ans = 0;
	scanf("%lld %lld %lld",&n,&a,&b);
	move = a+b;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&z[i]);
	
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&b);
		pq.push(abs(z[i]-b));
	//	printf("masuk = %lld\n",abs(a-b));
	}
	while(move>0)
	{
		cek = pq.top();	
		//printf("%lld %lld\n",cek,move);
		pq.pop();
		move--;
		pq.push(abs(cek-1));
	}
//	printf("\n");
	while(!pq.empty())
	{
	
		cek = pq.top();
		ans+=(cek*cek);	
		//printf("%lld cek = %lld\n",ans,cek);
		pq.pop();
	}
//	printf("\n");
	printf("%lld\n",ans);
	return 0;
}