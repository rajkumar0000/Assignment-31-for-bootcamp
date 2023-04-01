/*
7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.
*/
int total_employee=0;
#include<iostream>
using namespace std;
class employee
{
protected:

    int emp_code;
    char name[20];
public:

};
class fulltime : public employee
{
    int daily_rate;
    int number_of_days;
    int salary;
public:
    void setdetail()
    {
        emp_code=++total_employee;
        cout<<"enter name : ";
        cin>>name;
        cout<<"enter days : ";
        cin>>number_of_days;
        cout<<"enter daily rate : ";
        cin>>daily_rate;
        salary=number_of_days*daily_rate;
        cout<<"entry successfull"<<endl;
        cout<<"your code is - "<<emp_code<<endl;

    }
 virtual   void display()
    {
        cout<<"\n------------------------------\n";
        cout<<"Emp code :"<<emp_code<<endl;
        cout<<"name     :"<<name<<endl;
        cout<<"Status   :FullTime"<<endl;
        cout<<"Salary   :"<<salary<<endl;
        cout<<"\n------------------------------\n";
    }
};
class parttime : public employee
{
    int number_of_working_hour;
    int hourly_rate;
    int salary;
public:
    void setdetail()
    {
        emp_code=++total_employee;
        cout<<"enter name : ";
        cin>>name;
        cout<<"enter working hour : ";
        cin>>number_of_working_hour;
        cout<<"enter hourly rate : ";
        cin>>hourly_rate;
        salary=number_of_working_hour*hourly_rate;
        cout<<"entry successfull "<<endl;
        cout<<"your employee code is - "<<emp_code<<endl;
    }
    void display()
    {
        cout<<"\n------------------------------\n";
        cout<<"Emp code :"<<emp_code<<endl;
        cout<<"name     :"<<name<<endl;
        cout<<"Status   :PartTime"<<endl;
        cout<<"Salary   :"<<salary<<endl;
        cout<<"\n------------------------------\n";
    }
};
int main()
{
    fulltime *fulltime_list[10] ;
    parttime *parttime_list[10] ;
    int countsF=0;
    int countsP=0;
    while(1)
    {
        cout<<"1. Accept the details of employees."<<endl;
        cout<<"2. Display the details of employees."<<endl;
        cout<<"3. Search a given Employee by emp-code."<<endl;
        int n;
        cin>>n;
        switch(n)
        {
            case 1:
                {
                    cout<<"1.FullTime"<<endl;
                    cout<<"2.PartTime"<<endl;
                    int f;
                    cin>>f;
                    switch(f)
                    {
                    case 1:
                        {
                            fulltime *tempF;
                            tempF=new fulltime;
                            tempF->setdetail();
                           // cout<<"\ncounts at frist time ="<<countsF; //for debug purpos
                            fulltime_list[countsF++]=tempF;
                            //delete tempF;
                          //  cout<<"\ncounts at second time ="<<countsF<<endl; //for debug
                            //countsF++;
                            break;
                        }
                        case 2:
                            {
                                parttime *tempP;
                                tempP=new parttime;
                                tempP->setdetail();
                              //  cout<<"\ncounts at frist time ="<<countsF;  //for debug
                                parttime_list[countsP++]=tempP;
                              //  cout<<"\ncounts at second time ="<<countsF<<endl;//for debug
                                //delete tempP;
                                //countsP++;
                                cout<<"entry successfull"<<endl;
                                break;
                            }
                    }
                    break;
                }
            case 2:
                {
                    cout<<"1.FullTime"<<endl;
                    cout<<"2.PartTime"<<endl;
                    int input;
                    cin>>input;
                    switch(input)
                    {
                    case 1:
                        {
                            for(int i=0 ; i<countsF ; i++)
                            {
                                cout<<"\n\n--- "<<i<<" pointer data "<<endl;
                                fulltime_list[i]->display();
                            }
                            break;
                        }
                    case 2:
                        {
                            for(int i=0 ; i<countsP ; i++)
                            {
                                cout<<"\n\n--- "<<i<<" pointer data "<<endl;
                                parttime_list[i]->display();
                            }
                        }
                        break;
                    }
                    break;
                }
                case 3:
                    {
                        cout<<"sorry here is no code for option 3."<<endl;
                    }

        }
    }
}
