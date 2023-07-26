#include<stdio.h>
int main()
{
    int a[3][3],i,j,sr,sc;
    printf("enter elements of matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++) 
    {
        scanf("%d",&a[i][j]);
    }
    }
    for(i=0; i<3; i++)
    {
        sr=sc=0;
        for(j=0; j<3; j++)
        {
            sr+=a[i][j];
            sc+=a[j][i];
        }
        printf("sum of rows=%d***********sum of columns=%d\n",sr,sc);
    }
    }