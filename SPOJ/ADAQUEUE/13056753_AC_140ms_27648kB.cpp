#include<iostream>
#include<stdio.h>
#include<vector>
#include <string>
using namespace std;
bool revers;
int queue[3000000];
int main()
{
	int q,num;
	char input[10];
	int min = 1000000;
	int max = 1000001;
	int jum = 0;
	scanf("%d",&q);
	revers = 0;
	while(q--)
	{
		scanf("%s",input);
		if(input[0]=='t')
		{
			
			if(revers==0)
			{
				scanf("%d",&queue[max]);
				max++;
			}
			
			else 
			{
				scanf("%d",&queue[min]);
				min--;
			}
			jum++;
		}
		else if(input[0]=='p')
		{

			if(revers==1)
			{
				scanf("%d",&queue[max]);
				max++;
			}
			else 
			{
				scanf("%d",&queue[min]);
				min--;
			}
			jum++;

		}
		else if(input[0]=='r')
		{
			if(revers==1) 
			{
//				int temp;
//				temp = min;
//				min = max;
//				max = temp;
				revers = 0;
			}
			else
			{
				
//				int temp;
//				temp = min;
//				min = max;
//				max = temp;
				revers = 1;
			
			}
		}
		else if(input[0]=='f')
		{
			if(jum<1) printf("No job for Ada?\n");
			else
			{
				if(revers==0)
				{
					printf("%d\n",queue[max-1]);
					max--;
				}
				else
				{
					printf("%d\n",queue[min+1]);
					min++;
				}
				jum--;
			}
			
		}
		else if(input[0]=='b')
		{
			if(jum<1) printf("No job for Ada?\n");
			else
			{
				if(revers==0)
				{
					printf("%d\n",queue[min+1]);
					min++;
				}
				else
				{
					printf("%d\n",queue[max-1]);
					max--;
				}
				jum--;
			}
		}
//		if(jum==0) printf("empty");
//		else
//		{
//			for(int i=0;i<jum;i++)
//			{
//				printf("%d ",queue[i]);
//			}
//			//printf("\n\n");
//		}
//		printf("\n\n");
	}
	
	
	
	return 0;
}