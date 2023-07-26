#include<stdio.h>
int main()
{
    int a=20;
    int *p=&a;
    int **q=&p;
    int ***f=&q;
    printf("a=%d\t%d\t%d\t%d\n",a,*p,**q,***f);//a=20 20 20 20
    printf("address of q=%d\t%d\n",f,&q);
    printf("address of p=%d\t%d\t%d\n",*f,q,&p);
    printf("address of a=%d\t%d\t%d\t%d\n",**f,*q,p,&a);
    **q=25;
    printf("a=%d\n",a);//25
    ***f=80;
    printf("a=%d",a);//80
    /* *q=25//error because that is address of a */
}