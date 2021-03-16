#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a,x[11],ans,d;
	for (int i=0;i<10;i++)
	{
		scanf("%d",&a);
		x[i] = a%42;
		ans++;
		for (int j=0;j<i;j++)
		{
			if (x[i]==x[j])
			{
				ans--;
				break;
			}
		}
	}

	printf("%d",ans);
	return 0;
}