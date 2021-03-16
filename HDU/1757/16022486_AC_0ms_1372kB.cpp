#include<bits/stdc++.h>
using namespace std;
int n,k,m,x[10][10],ans[11],idx,matrix[15][15],tmp[11],z;
void multiply(int a[10][10], int b[10][10]) 
{ 
    int mul[15][15]; 
    for (int i = 0; i < 10; i++) 
    { 
        for (int j = 0; j < 10; j++) 
        { 
            mul[i][j] = 0; 
            for (int k = 0; k < 10; k++) 
                mul[i][j] += (a[i][k]%m*b[k][j]%m)%m; 
        } 
    } 
    for (int i=0; i<10; i++) 
        for (int j=0; j<10; j++) 
            a[i][j] = mul[i][j];
} 
  
  
int power(int F[10][10], int n) 
{ 
	int M[10][10];
  	for(int i=0;i<10;i++)
  	{
  		for(int j=0;j<10;j++)
  		{
  			if(i==0)
  			{
  				M[i][j] = x[i][j];
			}
			else
			{
				M[i][j] = 0;
			}
		}
	}
	M[1][0] = 1;
	M[2][1] = 1;
	M[3][2] = 1;
	M[4][3] = 1;
	M[5][4] = 1;
	M[6][5] = 1;
	M[7][6] = 1;
	M[8][7] = 1;
	M[9][8] = 1;
	if (n==1) return ((F[0][0]*tmp[0])%m+(F[0][1]*tmp[1])%m+(F[0][2]*tmp[2])%m+(F[0][3]*tmp[3])%m+(F[0][4]*tmp[4])%m+(F[0][5]*tmp[5])%m+(F[0][6]*tmp[6])%m+(F[0][7]*tmp[7])%m+(F[0][8]*tmp[8])%m+(F[0][9]*tmp[9])%m)%m; 
  	
	
    power(F, n/2);
	multiply(F, F);
    if (n%2 != 0) multiply(F, M);  
    
    return ((F[0][0]*tmp[0])%m+(F[0][1]*tmp[1])%m+(F[0][2]*tmp[2])%m+(F[0][3]*tmp[3])%m+(F[0][4]*tmp[4])%m+(F[0][5]*tmp[5])%m+(F[0][6]*tmp[6])%m+(F[0][7]*tmp[7])%m+(F[0][8]*tmp[8])%m+(F[0][9]*tmp[9])%m)%m;
}
int findNthTerm(int n) 
{ 
    int M[10][10];
  	for(int i=0;i<10;i++)
  	{
  		for(int j=0;j<10;j++)
  		{
  			if(i==0)
  			{
  				M[i][j] = x[i][j];
			}
			else
			{
				M[i][j] = 0;
			}
		}
	}
	M[1][0] = 1;
	M[2][1] = 1;
	M[3][2] = 1;
	M[4][3] = 1;
	M[5][4] = 1;
	M[6][5] = 1;
	M[7][6] = 1;
	M[8][7] = 1;
	M[9][8] = 1;
  	z = n-9;
    return power(M, n-9); 
} 
int main()
{
	x[1][0] = 1;
	x[2][1] = 1;
	x[3][2] = 1;
	x[4][3] = 1;
	x[5][4] = 1;
	x[6][5] = 1;
	x[7][6] = 1;
	x[8][7] = 1;
	x[9][8]  =1;
	while(scanf("%d %d",&k,&m)!=EOF)
	{
		for(int i=0;i<10;i++)
		{
			scanf("%d",&x[0][i]);
			tmp[i] = 9-i;
		}
		if(k<10) printf("%d\n",k%m);
		else
		{
			printf("%d\n",findNthTerm(k)%m);
		}
	}
	return 0;
}