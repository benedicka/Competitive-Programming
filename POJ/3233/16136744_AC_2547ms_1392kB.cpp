#include<stdio.h>
int n,k,mod;
bool ok;
struct matrix
{
    int x[50][50];
}I,m0,ans,input,hasil;
struct un
{
	matrix v[4][4];	
};
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
				c.x[i][j]%=mod;
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
    		c.x[i][j] = a.x[i][j]%mod+b.x[i][j]%mod;
    		c.x[i][j]%=mod;
		}
	}
    return c;
}
un multi(un a, un b)
{
	un c;
	if(n>1)
	{
		c.v[0][0] = tambah(mul(a.v[0][0],b.v[0][0]) , mul(a.v[0][1],b.v[1][0]) );
		c.v[0][1] = tambah(mul(a.v[0][0],b.v[0][1]) , mul(a.v[0][1],b.v[1][1]) );
		c.v[1][0] = tambah(mul(a.v[1][0],b.v[0][0]) , mul(a.v[1][1],b.v[1][0]) );
		c.v[1][1] = tambah(mul(a.v[1][0],b.v[0][1]) , mul(a.v[1][1],b.v[1][1]) );
	}
	return c;
}
un fast(un& a, int p)
{
    un r,b=a;
    for (int i=0; i<2; i++)
    {
    	for (int j=0; j<2; j++)
    	{
    		r.v[i][j]= I;
		}
	}
    while(p)
	{
        if(p&1)r=multi(r,b);
        b=multi(b,b);
        p>>=1;
    }
    return r;
}

un find(int n)
{
	un z;
	z.v[0][0] = I;
	z.v[0][1] = I;
	z.v[1][0] = m0;
	z.v[1][1] = input;
	return fast(z,n);
}

int main()
{
	scanf("%d %d %d",&n,&k,&mod);
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
	un z = find(k-1);
	hasil = mul(z.v[0][1],input);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j!=0) printf(" ");
			printf("%d",hasil.x[i][j]%mod);
		}
		printf("\n");
	}
	return 0;
}