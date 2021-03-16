#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,m,a,ans,now,list[102],temp,idx;
	queue<int> antrian;
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			list[i] = a;
			idx++;
			antrian.push(a);
		}
		sort(list,list+n);
		idx = n-1;
		now = m;
//		for(int i=idx;i>=0;i--)
//		{
//			printf("%d ",list[i]);
//		}
//		printf("\n");
		while(!antrian.empty())
		{
			if(antrian.front()==list[idx])
			{
				idx--;
				ans++;
				if(now==0) break;
				now--;
				if(now<0) now = n-1;
				antrian.pop();
				n--;
			}
			else
			{
				temp = antrian.front();
				antrian.pop();
				antrian.push(temp);
				now--;
				if(now<0) now = n-1;
			}
		}
		while(!antrian.empty())
		{
			antrian.pop();
		}
		printf("%d\n",ans);
	}
	return 0;
}
