#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char a[6];
	char b[6];
	char c[6];
	char d[6];
	char e[6];
	char f[6];
	char g[6];
	char h[6];
	char i[6];
	char x[100];
	strcpy(a,"+---+");
	strcpy(b,"    +");
	strcpy(c,"+    ");
	strcpy(d,"|    ");
	strcpy(e,"    |");
	strcpy(f,"|   |");
	strcpy(g,"+   +");
	strcpy(h,"     ");
	strcpy(i,"  o  ");
	do
	{
		scanf("%s",&x);
		if(strcmp(x,"end")==0) 
		{
			printf("end\n");	
			break;	
		}
		for (int i=0;i<=7;i++)
		{
			if (i==0)
			{
				if (x[0]=='1') printf("%s",b);
				else if (x[0]=='4')printf("%s",g);
				else printf("%s",a);
				printf("  ");
				if (x[1]=='1') printf("%s",b);
				else if (x[1]=='4')printf("%s",g);
				else printf("%s",a);
				
				printf("%s",h);
				
				if (x[3]=='1') printf("%s",b);
				else if (x[3]=='4')printf("%s",g);
				else printf("%s",a);
				printf("  ");
				if (x[4]=='1') printf("%s",b);
				else if (x[4]=='4')printf("%s",g);
				else printf("%s",a);
				printf("\n");
			}
			else if (i==2 || i==3)
			{
				if (x[0]=='1' || x[0]=='2' || x[0]=='3' || x[0]=='7') printf("%s",e);
				else if (x[0]=='4' || x[0]=='8' || x[0]=='0'|| x[0]=='9')printf("%s",f);
				else printf("%s",d);
				printf("  ");
				if (x[1]=='1' || x[1]=='2' || x[1]=='3' || x[1]=='7') printf("%s",e);
				else if (x[1]=='4' || x[1]=='8' || x[1]=='0' || x[1]=='9')printf("%s",f);
				else printf("%s",d);
				
				if (i==2)printf("%s",h);
				else printf("  o  ");
				
				if (x[3]=='1' || x[3]=='2' || x[3]=='3' || x[3]=='7') printf("%s",e);
			
				else if (x[3]=='4' || x[3]=='8' || x[3]=='0'|| x[3]=='9')printf("%s",f);
				else printf("%s",d);
				printf("  ");
				if (x[4]=='1' || x[4]=='2' || x[4]=='3' || x[4]=='7') printf("%s",e);
				
				else if (x[4]=='4' || x[4]=='8' || x[4]=='0'|| x[4]=='9')printf("%s",f);
				else printf("%s",d);
				printf("\n");
			}
		else if (i==4)
			{
				if (x[0]=='1'|| x[0]=='7') printf("%s",b);
				else if (x[0]=='0')printf("+   +");
				else printf("%s",a);
				printf("  ");
				if (x[1]=='1'||x[1]=='7') printf("%s",b);
				else if (x[1]=='0')printf("+   +");
				else printf("%s",a);
				
				printf("%s",h);
				
				if (x[3]=='1'||x[3]=='7') printf("%s",b);
				else if (x[3]=='0')printf("+   +");
				else printf("%s",a);
				printf("  ");
				if (x[4]=='1'||x[4]=='7') printf("%s",b);
				else if (x[4]=='0')printf("+   +");
				else printf("%s",a);
				printf("\n");
			}
			else if (i==5 || i==6)
			{
				if (x[0]=='1'|| x[0]=='7' || x[0]=='9' ||x[0]=='4' || x[0] == '3' || x[0]=='5') printf("%s",e);
				else if (x[0]=='0' || x[0]=='8' || x[0]=='6')printf("%s",f);
				else printf("%s",d);
				printf("  ");
				if (x[1]=='1'|| x[1]=='7' || x[1]=='9' ||x[1]=='4' || x[1] == '3'|| x[1]=='5') printf("%s",e);
				else if (x[1]=='0' || x[1]=='8' ||x[1]=='6')printf("%s",f);
				else printf("%s",d);
				
				if (i==6)printf("%s",h);
				else printf("  o  ");
				
				
				if (x[3]=='1'|| x[3]=='7' || x[3]=='9' ||x[3]=='4' || x[3] == '3'|| x[3]=='5') printf("%s",e);
				else if (x[3]=='0' || x[3]=='8' || x[3]=='6')printf("%s",f);
				else printf("%s",d);
				printf("  ");
				if (x[4]=='1'|| x[4]=='7' || x[4]=='9' ||x[4]=='4' || x[4] == '3'|| x[4]=='5') printf("%s",e);
				else if (x[4]=='0' || x[4]=='8' || x[4]=='6')printf("%s",f);
				else printf("%s",d);
				printf("\n");
			}
			else if (i==7)
			{
				if (x[0]=='1') printf("%s",b);
				else if (x[0]=='4' || x[0]=='7')printf("%s",b);
				else printf("%s",a);
				printf("  ");
				if (x[1]=='1') printf("%s",b);
				else if (x[1]=='4' || x[1]=='7')printf("%s",b);
				else printf("%s",a); 
				
				printf("%s",h);
				
				if (x[3]=='1') printf("%s",b);
				else if (x[3]=='4' || x[3]=='7')printf("%s",b);
				else printf("%s",a);
				printf("  ");
				if (x[4]=='1') printf("%s",b);
				else if (x[4]=='4' || x[4]=='7')printf("%s",b);
				else printf("%s",a); 
				printf("\n");
			}


		
		
		}
			printf("\n\n");
	}while (strcmp(x,"end")!=0);
	
	
	return 0;
}
