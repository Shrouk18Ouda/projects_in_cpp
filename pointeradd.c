#include<stdio.h>
int main()
{
    int a[5]={1,8,9,-6,6};
    int *p=&a[0];
    printf("a[0]=%d\n",*p);
    printf("address of element of a[0]=%u\n",p);
    p=p+2;
   /* *p=25;*///a[2]=25
    printf("a[2]=%d\n",*p);
    printf("address of element of a[2]=%u\n",p);

}