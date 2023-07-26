#include<stdio.h>
int main()
{
    int a[10],even,odd,i;
    printf("enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("number of even=%d\nnumber of odd=%d\n",even,odd);
}