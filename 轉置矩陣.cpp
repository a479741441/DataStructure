#include <bits/stdc++.h>
int main()
{
    int x,y,i,j;
    printf("¦C¼Æ:");
    scanf("%d",&x);
    printf("¦æ¼Æ:");
    scanf("%d",&y);
    int **a=(int**)malloc(sizeof(int*)*y);
    int **b=(int**)malloc(sizeof(int*)*x);
    for(i=0;i<x;i++)
    {
        a[i]=(int*)malloc(sizeof(int)*x);
        b[i]=(int*)malloc(sizeof(int)*y);
    }
    for(i=0;i<x;i++)
    {   
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    printf("\n");
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<y;i++)
    {
        free(a[i]);
        free(b[i]);
    }
    free(a);
    free(b);
    return 0;
}

