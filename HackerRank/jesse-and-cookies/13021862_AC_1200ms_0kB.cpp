#include<queue>
#include<stdio.h>
using namespace std;
bool ok;
int main()
{
	priority_queue <long long> a;
	long long n,k,input,ans =0;
	scanf("%d %d",&n,&k);
	while(n--)
	{
		scanf("%d",&input);
		a.push(-1*input);
	}
	ok = 1;
	long long c1,c2;
	while(-1*a.top()<k)
	{
		c1 = -1*a.top();
		a.pop();
		if(a.empty())
		{
			ok = 0;
			printf("-1\n");
			break;
		}
		ans++;
		c2 = -1*a.top();
		//printf("%lld %lld\n",c1,c2);
		a.pop();
		a.push(-1*(c1+2*c2));
		
	}
	if(ok==1) printf("%lld\n",ans);
	return 0;
}