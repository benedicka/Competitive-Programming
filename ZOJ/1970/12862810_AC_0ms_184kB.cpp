#include<stdio.h>
#include<string.h>
int main()
{
	char x[1000000],y[1000000],posisi,cek;
	while(scanf("%s %s",x,y)!=EOF)
	{
		int l1 = strlen(x),l2 = strlen(y);
		posisi = 0;
		cek = 0;
	
			for(int j=0;j<l2;j++)
			{
				if(x[posisi]==y[j])
				{
					posisi++;
					cek++;
				}
				if(posisi==l1) break;
				
			}
		
		if(cek==l1) printf("Yes\n");
		else printf("No\n");
		x[0] = '\0';
		y[0] = '\0';
	}
	
	
	
	
	
	return 0;
}