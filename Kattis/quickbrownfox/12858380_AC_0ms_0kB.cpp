#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<ctype.h>
using namespace std;
int main()
{
	char x[120];
	int t,length,miss,cek,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%*c%[^\n]",x);
		length = strlen(x);
		sort(x,x+length);
		miss = 0;
		a = 0;
		for(int i=97;i<=122;i++)
		{
			cek = 0;
		
			for(int j=0;j<length;j++)
			{
				if(tolower(x[j])==i) 
				{
					cek = 1;
					break;
				}
			}
			if (cek==0)
			{
				if(a==0) 
				{
					a=1;
					printf("missing ");
				}
				miss = 1;
				printf("%c",i);
			}
		}
		if(miss == 0) printf("pangram");
		printf("\n");
	}
}