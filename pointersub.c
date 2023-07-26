#include<stdio.h>
int main()
{
    int d;
    int a[]={50,1,-1,10,11};
    int *p=&a[0];
    int *q=&a[4];
    d=p-q;//(address of a[0] - address of a[4])/4//0-4=-4
    printf("%d\n",d);
    *q=25;//a[4]=25
    printf("%d\n",*q);
    d=q-p;//(address of a[4] - address of a[0])/4//4-0=4
    printf("%d\n",d);
    *p=27;//a[0]=27
    printf("%d\n",*p);
    q=q-3;//(address of a[4]-3*sizeof(int(4)))//q=&a[1]/* *q=1 */
    printf("%d\t%d\n",q,*q);
    p=p+3;//(address of a[0]+3*sizeof(int(4)))//p=&a[3]/* *p=10 */
    printf("%d\t%d\n",p,*p);
    d=p-q;//(address of a[3] - addrress of a[1])/4//3-1=2
    printf("%d\n",d);
}