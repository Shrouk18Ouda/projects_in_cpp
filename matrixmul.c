//program to print multipliotion of 2 matrix.
#include<stdio.h>
#define N 50
int main()
{
    int  a[N][N],b[N][N],c[N][N],row1,col1,row2,col2,i,j,sum,k;
    printf("enter rows && cols of matrix1\n");
    printf("rows is:");
    scanf("%d",&row1);
    printf("cols is:");
    scanf("%d",&col1);
    printf("enter elements of matrix1:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter rows && cols of matrix2\n");
    printf("rows is:");
    scanf("%d",&row2);
    printf("cols is:");
    scanf("%d",&col2);
    printf("enter elements of matrix2:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix1 is:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("matrix2 is:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(col1==row2)
    {
        printf("multiply matrix1 by matrix2 is:\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                sum=0;
                for(k=0;k<row2;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
        }
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        
    }
    else
    {
        printf("can not multiply matrix1 by matrix2\n");
    }



}