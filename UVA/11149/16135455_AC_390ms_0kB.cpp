#include<bits/stdc++.h>
using namespace std;
int n,k;
bool ok;
struct matrix
{
    int x[50][50];
};
matrix I,m0;
matrix ans,input,hasil;
struct un
{
	matrix v[4][4];	
};
int mod = 10;
matrix mul (matrix a, matrix b)
{
    matrix c;
    for (int i=0; i<n; i++)
	{
        for (int j=0; j<n; j++)
		{
            c.x[i][j]=0;
            for (int k=0; k<n; k++)
			{
                c.x[i][j]+=((a.x[i][k]%mod)*(b.x[k][j]%mod))%mod;
                c.x[i][j]%=mod;
            }
        }
    }
    return c;
}
void cetak(matrix z)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",z.x[i][j]);
		}
		printf("\n");
	}
}
matrix tambah (matrix a, matrix b)
{
    matrix c;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		c.x[i][j] = a.x[i][j]+b.x[i][j];
    		c.x[i][j]%=mod;
		}
	}
    return c;
}
un multi(un a, un b)
{
	un c;
	c.v[0][0] = tambah(mul(a.v[0][0],b.v[0][0]) , mul(a.v[0][1],b.v[1][0]) );
	c.v[0][1] = tambah(mul(a.v[0][0],b.v[0][1]) , mul(a.v[0][1],b.v[1][1]) );
	c.v[1][0] = tambah(mul(a.v[1][0],b.v[0][0]) , mul(a.v[1][1],b.v[1][0]) );
	c.v[1][1] = tambah(mul(a.v[1][0],b.v[0][1]) , mul(a.v[1][1],b.v[1][1]) );
	
	return c;
}
un fast(un a,int p)
{
	un tmp;
   	if(p==1) return a;
	tmp = fast(a,p/2);
    if(p%2!=0) return(multi(tmp,multi(tmp,a)));
    else return multi(tmp,tmp);
}

un find(int n)
{
	un z;
	z.v[0][0] = I;
	z.v[0][1] = I;
	z.v[1][0] = m0;
	z.v[1][1] = input;
//	for(int i=0;i<2;i++)
//	{
//		for(int j=0;j<2;j++)
//		{
//			printf("%d %d:\n",i,j);
//			cetak(z.v[i][j]);
//		}
//	}
	return fast(z,n);
}

int main()
{
	ok = 0;
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		if(n==0 && k==0) break;
		if(ok) printf("\n");
		ok = 1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&input.x[i][j]);
				ans.x[i][j] = 0;
				if(i==j) I.x[i][j] = 1;
				else I.x[i][j] = 0;
				m0.x[i][j] = 0;
			}
		}
		un z = find(k);
//		for(int i=0;i<2;i++)
//		{
//			for(int j=0;j<2;j++)
//			{
//				printf("%d %d:\n",i,j);
//				cetak(z.v[i][j]);
//			}
//		}
//		printf("\n\n");
		hasil = tambah(mul(z.v[0][0],ans),mul(z.v[0][1],input));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j!=0) printf(" ");
				printf("%d",hasil.x[i][j]%10);
			}
			printf("\n");
		}
	}
	return 0;
}