#include<stdio.h>
#include<string.h>
int t,l,c,cnt;
double total,input;
char ans[100010],x[100010];
bool ok;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		c = 0;
		ok = 0;
		cnt = 0;
		total = 0;
		for(int i=0;i<12;i++)
		{
			scanf("%lf",&input);
			total+=input;
		}
		total/=12.0;
		printf("%d $",tc); 
		//printf("%.2lf\n",total);
		sprintf(x,"%.2lf",total);
		l = strlen(x)-1;
		while(l>=0)
		{
			ans[c] = x[l];
			if(ok) cnt++;
			if(cnt==3 && l!=0)
			{
				cnt = 0;
				c++;
				ans[c] = ',';
			}
			if(x[l]=='.') ok = 1;
			c++;
			l--;
		}
		for(int i=c-1;i>=0;i--)
		{
			printf("%c",ans[i]);
		}
		printf("\n");
	}
	return 0;
}