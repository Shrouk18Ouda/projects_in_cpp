#include<iostream>
using namespace std;
void Pattern()
{
    int i,j,k,space,rows;
    cout<<"enter number of rows:";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(space=1;space<=(rows-i);space++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            putchar(j+64);
        }
        for(k=i-1;k>=1;k--)
        {
            putchar(k+64);
        }
        cout<<endl;
    }
}
int main()
{
    Pattern();
    Pattern();
    Pattern();
    Pattern();
}