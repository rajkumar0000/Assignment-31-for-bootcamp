/*
10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.
*/
#include<iostream>
using namespace std;
class worker
{
protected:
    int code;
    char name[20];
    float salary;
public:
    void setcode()
    {
        cin.clear();
        cout<<"Enter code   :   ";
        cin>>code;
    }
    void setname()
    {
        cin.clear();
        cout<<"Enter name   :   ";
        cin>>name;
    }
    void setsalary()
    {
        cout<<"Enter salary :   ";
        cin>>salary;
    }

};

class officer
{
protected:
    float DA , HRA ;
public:
    void setDA()
    {
        cout<<"DA           :   ";
        cin>>DA;
    }
    void setHRA()
    {
        cout<<"Enter HRA    :   ";
        cin>>HRA;
    }
};
class manager : public worker ,public officer
{
protected:
    float TA;
    float gross_salary;
public:
    void cal_TA()
    {
        TA=salary/10;
    }
    void cal_gross_salary()
    {
        gross_salary=DA+HRA+TA+salary;
    }
    void setDetails()
    {
        this->setcode();
        this->setname();
        this->setsalary();
        this->setDA();
        this->setHRA();
        this->cal_TA();
        this->cal_gross_salary();
    }
    void display()
    {
        cout<<"\n\n----------------------------\n";
        cout<<"Code             :   "<<code<<endl;
        cout<<"Name             :   "<<name<<endl;
        cout<<"Salary           :   "<<salary<<endl;
        cout<<"DA               :   "<<DA<<endl;
        cout<<"HRA              :   "<<HRA<<endl;
        cout<<"TA               :   "<<TA<<endl;
        cout<<"Gross salary     :   "<<gross_salary<<endl<<endl;
    }
};

int main()
{
    manager *lst[10];   // only 10 workers entry limits
    int counts=0;
    while(1)
    {
        cout<<"1.Entry."<<endl;
        cout<<"2.How details."<<endl;
        int in;
        cin>>in;
        switch(in)
        {
        case 1:
            {
                manager *temp;
                temp=new manager;
                temp->setDetails();
                lst[counts++]=temp;
                break;
            }
        case 2:
            {
                for(int i=0 ; i<counts ; i++)
                {
                    lst[i]->display();
                }
            }
        }
    }
}
