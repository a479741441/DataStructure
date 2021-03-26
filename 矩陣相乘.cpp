#include <bits/stdc++.h>
int main()
{
	int x,y,z,i,j,k;
	//yaぇ︽计,ョbぇ计
	//xaぇ计,zbぇ︽计 
	printf("a痻皚计:");
	scanf("%d",&x);
	printf("a痻皚︽计のb痻皚计:");
	scanf("%d",&y);
	printf("b痻皚︽计:");
	scanf("%d",&z);
	int **a=(int**)malloc(sizeof(int*)*x);
    int **b=(int**)malloc(sizeof(int*)*y);
    int **c=(int**)malloc(sizeof(int*)*x);
    for(i=0;i<x;i++)
    {
        a[i]=(int*)malloc(sizeof(int)*y);
        b[i]=(int*)malloc(sizeof(int)*z);
        c[i]=(int*)malloc(sizeof(int)*z);
    }
    printf("\n");
    for(i=0;i<x;i++)
    {   
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<z;j++)
        {   
		    c[i][j]=0; 
            for(k=0;k<y;k++)
            {
            	c[i][j]=c[i][j]+a[i][k]*b[k][j];//仓 
			}
			printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<x;i++)
    {
        free(a[i]);
        free(b[i]);
        free(c[i]);
    }
    free(a);
    free(b);
    free(c);
    return 0;
}


