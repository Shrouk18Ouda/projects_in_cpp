#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    string userkey = "on";
    while (userkey != "off")
    {
cout<<"hello everybody....this is best calculater\n";
float num1,num2;
int num3,num4;
char oper;
cin>>num1>>oper>>num2;
if (oper == '+')
{
    cout<<num1 <<'+'<<num2<<"="<<num1+num2<<endl;
}
else if (oper == '-')
{
    cout<<num1 <<'-'<<num2<<"="<<num1-num2<<endl;
}
else if (oper == '*')
{
    cout<<num1 <<'*'<<num2<<"="<<num1*num2<<endl;
}
else if (oper == '/')
{
    cout<<num1 <<'/'<<num2<<"="<<num1/num2<<endl;
}
else if (oper == '%')
{
    cin>>num3>>oper>>num4;
    cout<<num3 <<'%'<<num4<<"="<<num3%num4<<endl;
}
float number ;
cin>>number;
cout<<sqrt(number)<<endl;
cin >> userkey;
    }
}