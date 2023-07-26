#include<iostream>
#include<cstring>
using namespace std;
class Car
{
    private:
    string name;
    string color;
    int maxspeed;
    int modele;
    public:
    void setName(string n)
    {
        name=n;
    }
    void setColor(string c)
    {
        color=c;
    }
    void setMaxspeed(int speed)
    {
        maxspeed=speed;
    }
    void setModele(int m)
    {
        modele=m;  
    }
    string getName()// char* because return name.
    {
        return name;
    }
    string getColor()
    {
        return color;
    }
    int getMaxspeed()
    {
        return maxspeed;
    }
    int getModele()
    {
        return modele;
    }
    void print()
    {
        cout<<"name = "<<getName()<<endl;// or cout<<name
        cout<<"color = "<<getColor()<<endl;// or cout<<color
        cout<<"maxspeed = "<<getMaxspeed()<<endl;// or cout<<maxspeed
        cout<<"modele = "<<getModele()<<endl;// or cout<<modele
    }
};
int main()
{
    Car obj1,obj2;
    obj1.setName("bmw");
    obj1.setColor("black");
    obj1.setMaxspeed(300);
    obj1.setModele(2022);
    obj1.print();
    obj2.setName("marsides");
    obj2.setColor("red");
    obj2.setMaxspeed(400);
    obj2.setModele(2023);
    obj2.print();
}