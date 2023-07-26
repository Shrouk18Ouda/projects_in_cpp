#include<stdio.h>
   void sub()
{
    int a,b,sub=0;
    printf("enter two numbe:\n");
    scanf("%d %d",&a,&b);
    sub=a-b;
    printf("sub=%d\n",sub);
}
void sum()
{
    int a,b,sum=0;
    printf("enter two numbers:\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    sub();//اقدر استدعي داله جوه داله عادي
    sub();
}
void main()
{
    sum();
    printf("hello\n");
    sum();
}