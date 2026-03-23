#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
    int a[10][10],b[10][10],result[10][10];
    printf("enter rows and column of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter rows and column of second matrix\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("mul. not possible");
    }
    printf("enter elements of first matrix\n");
    for(i=0;i<r1;i++)
    {
    for(j=0;j<c1;j++)
    scanf("%d",&a[i][j]);
    }
    printf("enter elements of second matrix\n");
    for(i=0;i<r2;i++)
    {
    for(j=0;j<c2;j++)
    scanf("%d",&b[i][j]);
    }
    result[i][j]=0;
    for(k=0;k<c1;k++)
    {
        result[i][j]+=a[i][k]*b[k][j];
        printf("Resultant Matrix\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d",result[i][j]);
            printf("\n");
        }
    }
    return 0;
}
