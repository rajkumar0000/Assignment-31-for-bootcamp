/*
6. Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method)
*/
#include<iostream>
using namespace std;
class B;
class A
{
    int x ;
public:
    void setX()
    {
        cout<<"enter valuse in x :";
        cin>>x;
    }
    friend void exchange(A,B);
    void showX()
    {
        cout<<"x = "<<x<<endl;
    }
};
class B
{
    int y ;
public:
    void setY()
    {
        cout<<"enter valuse in Y :";
        cin>>y;
    }
    friend void exchange(A ,B);
    void showY()
    {
        cout<<"Y = "<<y<<endl;
    }
};
void exchange(A a , B b)
{
    cout<<a.x<<endl;
    cout<<b.y<<endl;
    cout<<"enter exchange function"<<endl;
    int temp;cout<<"create temp"<<endl;
    temp=a.x;cout<<"temp<- a.x "<<endl;
    a.x=b.y;cout<<"a.x <- b.y"<<endl;
    b.y=temp;cout<<"b.y <- temp"<<endl;
    cout<<"exchange success full "<<endl;
    cout<<a.x<<endl;
    cout<<b.y<<endl;
}
int main()
{
    A a1;
    B b1;
    a1.setX();
    b1.setY();
    exchange(a1,b1);
    a1.showX();
    b1.showY();

}
