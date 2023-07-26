#include<stdio.h>
int main()
{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    printf("%d\n",*p);//a[0]=10
    printf("%d\t%d\t%d\n",(*p)++,*p++,*++p);//right to left 11 11 -1(-1 becomes 0 )
    q=p+3;
    printf("%d\n",*q-3);/* *(120)-3 == 5-3 =2*/
    printf("%d\n",*--p+5);/* *(104)+5==11+5=16*/
    printf("%d\n",*p+*q);/* *(104)+*(120)==11+5==16*/
}