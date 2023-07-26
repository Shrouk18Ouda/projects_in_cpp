#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   long long int x,y;
    cin>>x>>y;
    cout<<"floor "<<x<<" / "<<y<<" = "<<floor(x/y)<<endl;
    cout<<"ceil "<<x<<" / "<<y<<" = "<<ceil(x/y)<<endl;
    cout<<"round "<<x<<" / "<<y<<" = "<<round(x/y)<<endl;
}