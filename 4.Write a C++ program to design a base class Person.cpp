/*
4. Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
*/
#include<iostream>
using namespace std;
class person
{
private:
    char name[20] ,  address[30];
    int phonNum ;
public:
    void setName()
    {
        cout<<"enter name : ";
        cin>>name;
    }
    void setAdd()
    {
        cout<<"enter address : ";
        cin>>address;
    }
    void setPhonNum()
    {
        cout<<"enter phon Number : ";
        cin>>phonNum;
    }
    int getphon()
    {
        return phonNum;
    }
    char* getadd()
    {
        return address;
    }
    char* getname()
    {
        return name;
    }
};

class employee : public person
{
private:
    int eNo;
    char eName[20];
public:
    void setEmpNo()
    {
        cout<<"enter employee No. :";
        cin>>eNo;
    }
    void setEmpNmae()
    {
        cout<<"enter emp Name :";
        cin>>eName;
    }
    int getEmpNo()
    {
        return eNo;
    }
    char* getempNme()
    {
        return eName;
    }
};

class manager :public employee
{
private:
    char designation[10] , department[10] ;
    int basic_salary ;
public:
    void setdesignation()
    {
        cout<<"enter designaton : ";
        cin>>designation;
    }
    void setdepartment()
    {
        cout<<"enter department : ";
        cin>>department;
    }
    void setbasic_salary()
    {
        cout<<"enter salary : ";
        cin>>basic_salary;
    }
    char* getdesignation()
    {
        return designation;
    }
    char* getdepartment()
    {
        return department;
    }
    int getbasic_salary()
    {
        return basic_salary;
    }

    void display()
    {
        cout<<"\n--------------------------------\n";
        cout<<"Employee Id  : "<<getEmpNo()<<endl;
        cout<<"name         : "<<getname()<<endl;
        cout<<"emp name     : "<<getempNme()<<endl;
        cout<<"Designation  : "<<getdesignation()<<endl;
        cout<<"Department   : "<<getdepartment()<<endl;
        cout<<"basic-salary : "<<getbasic_salary()<<endl;
        cout<<"Address      : "<<getadd()<<endl;
    }
};

int main()
{
    cout<<"how enter details : ";
    int n;
    cin>>n;
    manager m[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" employee details"<<endl;
        m[i].setEmpNo();
        m[i].setName();
        m[i].setEmpNmae();
        m[i].setdesignation();
        m[i].setdepartment();
        m[i].setbasic_salary();
        m[i].setAdd();

    }
    for(int i=0;i<n;i++)
    {
        m[i].display();
    }
    return 0;
}
