#include<stdio.h>
#include<set>
using namespace std;
int main()
{
	set < int > s;
	int t,a,ans=0;
	scanf("%d",&t);
	while(t--)
	{
	
		scanf("%d",&a);
		if(a!=0) s.insert(a);
		
	}
	for(set<int>::iterator it =s.begin(); it!=s.end(); it++)
	{
		ans++;
	}
	s.clear();
	printf("%d\n",ans);
	
	return 0;
}