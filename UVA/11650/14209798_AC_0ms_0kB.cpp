#include<stdio.h>
#include<map>
using namespace std;
int t,h,m;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d:%d",&h,&m);
		h = 11-h;
		m = 60-m;
		if(m>=60)
		{
			m-=60;
			h+=1;
		}
		if(h<=0) h += 12;
		printf("%02d:%02d\n",h,m);
	}
	return 0;
}