#include<iostream>
using namespace std;
void printmassage(string massage,int numberofstars)
{
    cout<<"*****************************************\n";
    cout<<massage<<endl;
    cout<<"*****************************************\n";
}
float Addition(float number1,float number2)
{
    float sum= number1+number2;
    return sum;
}
float Subtraction(float number1,float number2)
{
    float sub= number1-number2;
    return sub;
}
float Multiblicatin(float number1,float number2)
{
    float multi= number1*number2;
    return multi;
}
float Devition(float number1,float number2)
{
    float devition= number1+number2;
    return devition;
}
float Modouls(float number1,float number2)
{
    float modouls= int(number1)%int(number2);
    return modouls;
}
int main()
{
    printmassage("welcome to calculater program",20);
    printmassage("please enter first value",10);
    float firstvalue=0,secondvalue=0;
    char oper;
    cin>>firstvalue;
    printmassage("please enter your operator(+,-,*,/,%)",25);
    cin>>oper;
    printmassage("please enter second value",15);
    cin>>secondvalue;
    if(oper=='+')
    {
        printmassage("your result is",8);
        float sum=Addition(firstvalue,secondvalue);
        cout<<sum;
    }
    else if(oper=='-')
    {
        printmassage("your result is",8);
        cout<<Subtraction(firstvalue,secondvalue);
    }
    else if(oper=='/')
    {
        printmassage("your result is",8);
        cout<<Devition(firstvalue,secondvalue);
    }
    else if(oper=='*')
    {
        printmassage("your result is",8);
        cout<<Multiblicatin(firstvalue,secondvalue);
    }
    else if(oper=='%')
    {
        printmassage("your result is",8);
        if((firstvalue-int(firstvalue))>0||(secondvalue-int(secondvalue))>0)
        {
            cout<<"error\n";
        }
        else
        {
            float modouls=Modouls(firstvalue,secondvalue);
            cout<<modouls;
        }
    }
    else
    {
        "ERROR\n";
    }
}