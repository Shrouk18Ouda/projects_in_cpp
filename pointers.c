#include<stdio.h>
int main()
{
    int a=10,b=9,c;
    int *p,*q;
    p=(&a,&b);
   // q=&b;
    c=*p;
    printf("value of a=%d\n",a);//10
    printf("value of b=%d\n",b);//9
    printf("address of a=%x\n",&a);//address of a
    printf("address of b=%x\n",&b);//address of b
    printf("address of a=%x\n",p);//address of a
   // printf("address of b=%x\n",q);//address of b
    printf("value of a=%d\n",*p);//value of a=10
    //printf("value of b=%d\n",*q);//value of b=9
    printf("value of address of p=%x\n",&p);//value of address of p
    //printf("value of address of q=%x\n",&q);//value of address of q
    printf("value of c=%d\n",c);//value of c=10


}