#include<stdio.h>
int main()
{
    int a[]={3,2,67,0,56};
    int *p;
    p=a;
    printf("%d\n",*p++);//3
    printf("%d\n",*p);//2
    printf("%d\t%d\n",*p++,*p++);//from right to left 67   2
    p=&a[3];
    printf("%d\t%d\t%d\n",*p--,*--p,*--p);//from right to left 2  2   67
    printf("%d\n",*p);//3

}