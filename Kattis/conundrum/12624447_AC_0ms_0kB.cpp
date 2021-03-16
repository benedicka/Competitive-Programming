#include<stdio.h>
#include<string.h>
int main()
{
	char x[301];
	int length,ans;
	scanf("%s",&x);
	ans=0;
	length = strlen(x)-1;
	for (int i=1;i<length;i+=3)
	{
		if (x[i]!='E' && x[i-1]!='P'&& x[i+1]!= 'R') ans+=3;
		else if (x[i]!='E' && x[i-1]!='P' && x[i+1]== 'R') ans+=2;
		else if (x[i]=='E' && x[i-1]!='P' && x[i+1]!= 'R') ans+=2;
		else if (x[i]!='E' && x[i-1]=='P' && x[i+1]!= 'R') ans+=2;
		else if (x[i]=='E' && x[i-1]!='P' && x[i+1]== 'R') ans+=1;
		else if (x[i]=='E' && x[i-1]=='P' && x[i+1]!= 'R') ans+=1;
		else if (x[i]!='E' && x[i-1]=='P' && x[i+1]== 'R') ans+=1;
	}
	printf("%d\n",ans);
	return 0;
}	
	
	