#include<stdio.h>
char x[7];
int s1,s2,ans,c;
int main()
{
	ans = 6;
	scanf("%s",x);
	for(int d1=0;d1<=9;d1++)
	{
		for(int d2=0;d2<=9;d2++)
		{
			for(int d3=0;d3<=9;d3++)
			{
				for(int d4=0;d4<=9;d4++)
				{
					for(int d5=0;d5<=9;d5++)
					{
						for(int d6=0;d6<=9;d6++)
						{
						
							c = 0;
							if(x[0]-'0'!=d1) c++;
							if(x[1]-'0'!=d2) c++;
							if(x[2]-'0'!=d3) c++;
							if(x[3]-'0'!=d4) c++;
							if(x[4]-'0'!=d5) c++;
							if(x[5]-'0'!=d6) c++;
							if(d1+d2+d3==d4+d5+d6 &&c<ans) 
							{
								ans = c;
								//printf("%d%d%d%d%d%d  c = %d\n",d1,d2,d3,d4,d5,d6,c);
							}
						}
					}
				}
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}