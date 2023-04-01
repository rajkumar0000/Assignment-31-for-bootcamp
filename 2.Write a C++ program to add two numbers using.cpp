/*
2. Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.
*/
#include<iostream>
using namespace std;

class bass
{
private:
    int frist_number ,  second_number ;
public:
    void set_fristNumber()
    {
        cout<<"enter frist number  : ";
        cin>>frist_number;
    }
    void set_secondNumber()
    {
        cout<<"enter second number : ";
        cin>>second_number;
    }
    int getFnumber()
    {
        return frist_number;
    }
    int getSnumber()
    {
        return second_number;
    }
};
class derived : public bass
{
public:
    void dispaly()
    {
        cout<<endl<<"sum is - "<<getFnumber()+getSnumber();
    }
};
int main()
{
    derived d;
    d.set_fristNumber();
    d.set_secondNumber();
    d.dispaly();
}
