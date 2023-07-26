#include<iostream>
using namespace std;
class Rect
{
    public:
    int length;
    int width;
    int print()
    {
        return length*width;
    };
    //int print();//prototype fun.
};
/*int Rect::print()
{
    return length*width;
}*/
int main()
{
    Rect ob1;
    ob1.length=20;
    ob1.width=60;
    cout<<ob1.print();
}