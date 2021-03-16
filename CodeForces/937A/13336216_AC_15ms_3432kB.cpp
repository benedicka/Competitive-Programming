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
	

	printf("%d\n",s.size());
	
	return 0;
}