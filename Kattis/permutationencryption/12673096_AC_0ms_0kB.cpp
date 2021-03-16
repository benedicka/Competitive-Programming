#include<stdio.h>
#include<string.h>

int main()
{
	int x[1000],a,length,b;
	char y[1000];
	do
	{
	
	scanf("%d",&a);
	if (a==0 )break;
	for (int i=0;i<a;i++)
	{
		scanf("%d",&x[i]);
		x[i]=x[i]-1;
	}
	y[0]='\0';
	scanf("%*c%[^\n]s",&y);
	length=strlen(y);
//	printf("panjang = %d\n",length);
	if (length%a!=0 )
	{
		while (length%a!=0)
		{
			y[length]=' ';
			length++;
		}
		y[length]='\0';
	} 
	b=0;
//	printf("panjang = %d\n",strlen(y));
	for (int i=0;i<=length;i++)
	{
		if (i==0 ) printf("'");
		if (i<length)
		{
		printf("%c",y[x[b]]);
		x[b]=x[b]+a;
		b++;
		if (b>a-1) b=0;
		}
		
		if (i==length) printf("'\n");
	}
y[0]='\0';
} while (a!=0);
	

return 0;
}