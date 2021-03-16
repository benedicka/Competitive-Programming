#include<stdio.h>
char game[5][5];
int t,cntx=0,cnto=0;
bool menang(char cek)
{
	for(int i=0;i<3;i++)
	{
		if(game[i][0]==cek && game[i][1]==cek && game[i][2]==cek) return 1;
		if(game[0][i]==cek && game[1][i]==cek && game[2][i]==cek) return 1;
		if(game[0][0]==cek && game[1][1]==cek && game[2][2]==cek) return 1;
		if(game[0][2]==cek && game[1][1]==cek && game[2][0]==cek) return 1;
	}
	return 0;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		cntx = cnto = 0;
		for(int i=0;i<3;i++)
		{
			scanf("%s",&game[i]);		
		}
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(game[i][j]=='X') cntx++;
				else if(game[i][j]=='O') cnto++;
			}
		}
		//printf("x = %d o = %d\n",cntx,cnto);
		if(cnto>cntx || cntx>cnto+1) printf("no\n");
		else if(menang('X') && menang('O')) printf("no\n");
		else if(menang('X') && cntx!=cnto+1) printf("no\n");
		else if(menang('O') && cnto!=cntx) printf("no\n");
		else printf("yes\n");
	}
	return 0;

}