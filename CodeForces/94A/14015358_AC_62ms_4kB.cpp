#include<stdio.h>
#include<string.h>
#include<map>
#include<string>
using namespace std;
map < string , int > mp;
char temp[20],x[90];
int main()
{
	scanf("%s",x);
	for(int i=0;i<10;i++)
	{
		scanf("%s",temp);
		mp[temp] = i;
	}
	for(int i=0;i<80;i+=10)
	{
		for(int j=0;j<10;j++)
		{
			temp[j] = x[i+j];
		}
		//printf("%s\n",temp);
		printf("%d",mp[temp]);
	}
	printf("\n");
	return 0;
}