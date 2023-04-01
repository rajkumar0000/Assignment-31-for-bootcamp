/*
1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.
*/

#include<iostream>
using namespace std;

class Person
{
private:
    char name[20];
    int age;            // I am doing all function public ............
public:
    void setname()
    {
        cout<<"Enter name :  ";
        cin>>name;
    }
    void setage()
    {
        cout<<"enter age   :";
        cin>>age;
    }
    char* getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};
class Employee :public Person
{
private:
    int empid , salary;
public:
    void setempid()
    {
        cout<<"enter empid : ";
        cin>>empid;
    }
    void setempsalary()
    {
        cout<<"enter empsalary  :  ";
        cin>>salary;
    }
    int getempid()
    {
        return empid;
    }
    int getsalary()
    {
        return salary;
    }

};
int main()
{
   Employee e1;
   e1.setempid();
   e1.setname();
   e1.setage();
   e1.setempsalary();
   cout<<"\n\n\n---------------------------------\n";
   cout<<"Emp id -> "<<e1.getempid()<<endl;
   cout<<"Namw -> "<<e1.getname()<<endl;
   cout<<"age -> "<<e1.getage()<<endl;
   cout<<"salary -> "<<e1.getsalary()<<endl;
    return 0;
}
