 #include<iostream>
 using namespace std;
 class Newclass
 {
    public:
  void sub()
{
    int a,b,sub=0;
    cout<<"enter two numbe:\n";
    cin>>a>>b;
    sub=a-b;
    cout<<"sub="<<sub<<endl;
}
void sum()
{
    int a,b,sum=0;
    cout<<"enter two numbers:\n";
    cin>>a>>b;
    sum=a+b;
    cout<<"sum="<<sum<<endl;
    sub();//اقدر استدعي داله جوه داله عادي
    sub();
}
 };
int main()
{
    Newclass newclass;
    newclass.sum();//الداله اللي موجوده جوه ال class 
}