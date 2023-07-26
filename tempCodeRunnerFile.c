#include<stdio.h>
void sum();//function declaration
void main()
{
    sum();//function calling
}
void sum()//function definition
{
    int a,b,sum=0;
    printf("enter two number :");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
}