#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	char x[60];
	scanf("%s",&x);
	int posisi =1,length = strlen(x);
	
	for (int i=0;i<length;i++)
	{
		if (x[i]=='A')
		{
			if (posisi==1) posisi=2;
			else if (posisi==2)posisi=1;
		}
		if (x[i]=='B')
		{
			if (posisi==2) posisi=3;
			else if(posisi==3) posisi=2;
		}
		if (x[i]=='C')
		{
			if (posisi==1) posisi=3;
			else if (posisi==3) posisi=1;
		}
	}
	printf("%d",posisi);
	return 0;
}