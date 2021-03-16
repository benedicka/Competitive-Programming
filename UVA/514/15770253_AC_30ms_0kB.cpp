#include<stdio.h>
#include<queue>
#include<math.h>
#include<stack>
using namespace std;
int n,a[1010];
stack < int > s;
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		while(1)
		{
			scanf("%d",&a[0]);
			if(a[0]==0) 
			{
				printf("\n");
				break;
			}
			while(!s.empty()) s.pop();
			for(int i=1;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
			int curr=1,target = 0;
			while(curr<=n)
			{
				s.push(curr);
				while(!s.empty() && s.top()==a[target])
				{
					s.pop();
					target++;
					if(target>=n)
					{
						break;
					}
				}
				curr++;
			}
			if(s.empty()) printf("Yes\n");
			else printf("No\n");
		}
		
	}
	return 0;
}