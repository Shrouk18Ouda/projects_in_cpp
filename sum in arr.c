#include<stdio.h>
int main()
{
    int marks[5],sum=0,avg,i;
    printf("enter marks of students\n");
    for(i=0;i<5;i++) 
    {
scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum+=marks[i];
    }
    avg=sum/5;
    printf("sum=%d\navg=%d\n",sum,avg);
}