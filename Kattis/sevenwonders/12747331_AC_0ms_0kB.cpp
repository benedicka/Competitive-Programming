#include<stdio.h>
#include<string.h>
#include<algorithm>
int main()
{
	char x[70];
	scanf("%s",x);
	int length = strlen(x),c,a,j;
	long ans = 0;
	std::sort (x,x+length);
	j = 0;
	//printf ("%s\n",x);
	a = 0;
	c = 52;
	for(int i=0;i<length;i++)
	{
		a++;
		if (x[i]!=x[i+1])
		{
			ans+=a*a;
			//printf ("ans = %ld\n",ans);
			if (c>a) c = a;
			j++;
			a = 0;
		}	
			
	}
	if (j!=3) c = 0;
	//printf ("c = %d\n",c);
	ans = ans+7*c;
	printf("%ld",ans);
	return 0;
}