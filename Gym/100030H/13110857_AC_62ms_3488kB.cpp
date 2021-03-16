#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int l=0,r=0,ml=0,mr=0,length,n,jum[30],macam = 0,max = 0;
	char x[100010];
	scanf("%d",&n);
	scanf("%s",&x);
	length = strlen(x);
	for(int i=0;i<30;i++)
	{
		jum[i] = 0;
	}
	while(r<length)
	{
		if(jum[x[r]-'a']==0)
		{
			macam++;
			jum[x[r]-'a']++;
			if(macam>n)
			{
				while(macam>n)
				{
					jum[x[l]-'a']--;
					if(jum[x[l]-'a']==0) macam--;
					l++;
				}
			}
			
		}
		else if(jum[x[r]-'a']!=0) jum[x[r]-'a']++;
		if(r-l+1>max)
		{
			ml = l;
			mr = r;
		//	printf("%d %d\n",ml,mr);
			max = mr-ml+1;
		}
		r++;
		
	}
//	for(int i=ml;i<=mr;i++)
//	{
//		printf("%c",x[i]);
//	}
//	printf("\n");
	printf("%d %d\n",ml+1,mr+1);
	return 0;
}