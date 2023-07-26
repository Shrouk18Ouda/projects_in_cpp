#include<stdio.h>
int main()
{
    void *vp;
    int a=10;
    float b=9.8;
    char c='c';
    vp=&a;
    printf("%d\n",*(int*)vp);//10
    vp=&b;
    printf("%f\n",*(float*)vp);//9.8
    vp=&c;
    printf("%c\n",*(char*)vp);//c
}