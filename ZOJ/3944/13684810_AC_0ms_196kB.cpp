#include<stdio.h>
char input[110][110];
int main()
{
	int t,h,w,ans;
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d %d",&h,&w);
		for(int i=0;i<h;i++)
		{
			scanf("%s",&input[i]);
		}
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(input[i][j]=='O')
				{
					ans++;
					input[i][j] = '.';
					if(i+1<h && j-1>=0 && input[i+1][j-1]=='/') input[i+1][j-1]='.';
					if(i+1<h && j+1<w && input[i+1][j+1]=='\\') input[i+1][j+1]='.';
					if(i+1<h && input[i+1][j]=='|') input[i+1][j] = '.';
					if(i+2<h && j-1>=0 && input[i+2][j-1]=='(') input[i+2][j-1]='.';
					if(i+2<h && j+1<w && input[i+2][j+1]==')') input[i+2][j+1]='.';
				}
				else if(input[i][j]=='(')
				{
					ans++;
					input[i][j] = '.';
					if(j+2<w && input[i][j+2]==')') input[i][j+2]='.';
				}
				else if(input[i][j]==')')
				{
					ans++;
					input[i][j] = '.';
				}
				else if(input[i][j]=='/')
				{
					ans++;
					input[i][j] = '.';
					if(j+1<w && input[i][j+1]=='|') input[i][j+1] = '.';
					if(j+2<w && input[i][j+2]=='\\') input[i][j+2] = '.';
					if(i+1<h && input[i+1][j]=='(') input[i+1][j]='.';
					if(i+1<h && j+2<w && input[i+1][j+2]==')') input[i+1][j+2]='.';
				}
				else if(input[i][j]=='\\')
				{
					ans++;
					input[i][j] = '.';
					if(i+1<h && input[i+1][j]==')') input[i+1][j]='.';
					if(i+1<h && j-2>=0 && input[i+1][j-2]=='(') input[i+1][j-2]='.';
				}
				else if(input[i][j]=='|')
				{
					ans++;
					input[i][j] = '.';
					if(j+1<w && input[i][j+1]=='\\') input[i][j+1] = '.';
					if(i+1<h && j+1 <w && input[i+1][j+1]==')') input[i+1][j+1]='.';
					if(i+1<h && j-1>=0 && input[i+1][j-1]=='(') input[i+1][j-1]='.';
				}
			}
		}
		printf("%d",ans);
                printf("\n");
	}
	
	
	
	return 0;
}