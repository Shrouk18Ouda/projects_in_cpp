#include<iostream>
using namespace std;
void fun(int*,int*);
int main()
{
    int x=5,y=7;
    fun(&x,&y);
    cout<<x<<" "<<y;
}
void fun(int *x,int *y)
{
    *x=7;
    *y=5;
    cout<<*x<<" "<<*y<<endl;
}