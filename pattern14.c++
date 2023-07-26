//جاااااااااااااااامده جدااااااااا
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,space,rows;
    cout<<"enter number of rows:";
    cin>>rows;
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            putchar(j+64);
        }
        for(space=1;space<=(rows-i);space++)
        {
            cout<<" ";
        }
        if(i==rows||i==rows-1)
        {
            for(k=rows-1;k>=1;k--)
            {
                putchar(k+64);
            }
        }
        else
        {
            for(space=1;space<=(rows-1)-i;space++)
            {
                cout<<" ";
            }
            for(k=i;k>=1;k--)
            {
                putchar(k+64);
            }
        }
        cout<<endl;
    }
}