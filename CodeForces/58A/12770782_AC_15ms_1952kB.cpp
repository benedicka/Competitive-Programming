#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main()
{
	char x[1000];
	int length,cek=0;
	scanf("%s",&x);
	length = strlen(x);
	for(int i=0;i<length;i++)
	{
		if(cek==0 && x[i]=='h') cek++;
		else if(cek==1 && x[i]=='e') cek++;
		else if(cek==2 && x[i]=='l') cek++;
		else if(cek==3 && x[i]=='l') cek++;
		else if(cek==4 && x[i]=='o') cek++;
		if (cek==5) break;
	}
	if(cek==5) printf("YES");
	else printf("NO");
	
	
	return 0;
}