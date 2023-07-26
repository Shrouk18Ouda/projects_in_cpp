#include<stdio.h>
int main()
{
    int a=10,b=11;
    int *p,*q;
    p=&a;
    q=&b;
    *q=*p;//b=10
    //q=p;
    printf("a=%d\t%d\t%d",a,*p,*q);//10 10 10
}