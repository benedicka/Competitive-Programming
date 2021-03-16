#include<stack>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int ans=0,length;
	char x[10000];
	stack < char > tri;
	scanf("%s",&x);
	length = strlen(x);
	for(int i=0;i<length;i++)
	{
		if(!tri.empty() && x[i]=='3')
		{
			ans++;
			tri.pop();
		} 
		else if(x[i]=='1') tri.push(x[i]);
	}
	printf("%d\n",ans);
	return 0;
}