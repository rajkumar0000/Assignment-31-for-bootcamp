/*
9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.
*/
#include<iostream>
using namespace std;
class student
{
protected:
    int id;
    char name[20];
public:
    void setId()
    {
        cin.clear();
        cout<<"enter id : ";
        cin>>id;
    }
    void setname()
    {
        cin.clear();
        cout<<"enter name : ";
        cin>>name;
    }
    void setStudent_Details()
    {
        setId();
        setname();
    }
};

class studentExam : public student
{
protected:
    int hindi , english , physics , chemistry , math , socialsccience ;
public:
    void setMarks()
    {
        cin.clear();
        cout<<"enter Hindi mark  :";
        cin>>hindi;
        cout<<"enter English mark: ";
        cin.clear();
        cin>>english;
        cout<<"enter physics mark : ";
        cin.clear();
        cin>>physics;
        cout<<"enter chemistry mark: ";
        cin.clear();
        cin>>chemistry;
        cout<<"enter Math mark    : ";
        cin.clear();
        cin>>math;
        cout<<"enter social science mark :";
        cin.clear();
        cin>>socialsccience;
    }
};

class studentResult : public studentExam
{
    int total_marks;
    int percentage;
public:
    void calculate_marks()
    {
        total_marks=hindi+english+physics+chemistry+math+socialsccience;
    }
    void calculate_percentage()
    {
        percentage=total_marks/6;
    }
    void calculation()
    {
        calculate_marks();
        calculate_percentage();
    }
    void display()
    {
        cout<<"\n\n------------------------------\n";
        cout<<"Id           :   "<<id<<endl;
        cout<<"Name         :   "<<name<<endl;
        cout<<"Hindi        :   "<<hindi<<endl;
        cout<<"English      :   "<<english<<endl;
        cout<<"Physics      :   "<<physics<<endl;
        cout<<"Chemistry    :   "<<chemistry<<endl;
        cout<<"Math         :   "<<math<<endl;
        cout<<"Socialscience:   "<<socialsccience<<endl;
        cout<<"------------------------------\n";
        cout<<"Total Marks  :   "<<total_marks<<endl;
        cout<<"Percentage   :   "<<percentage<<endl;
        cout<<"------------------------------\n";
    }
    int getId()
    {
        return id;
    }
};

int main()
{
    studentResult *lst[10];
    int counts=0;

    while(1)
    {
        cout<<"\n\n1.Enter New student details."<<endl;
        cout<<"2.show Results."<<endl;
        cout<<"3.show result by id."<<endl;
        int n;
        cin>>n;
        switch(n)
        {
        case 1:
            {
                studentResult *temp;
                temp=new studentResult;
                temp->setStudent_Details();
                temp->setMarks();
                temp->calculation();
                lst[counts++]=temp;
                break;
            }
        case 2:
            {
                for(int i=0;i<counts;i++)
                {
                    lst[i]->display();
                }
                break;
            }
        case 3:
            {
                if(counts==0)
                    {
                        cout<<"Empty\n";
                        break;
                    }
                cout<<"\nEnter id   :   ";
                int in;
                cin>>in;
                for(int i=0 ; i<counts ; i++)
                {
                    if(lst[i]->getId()==in)
                    {
                        lst[i]->display();
                    }
                }
                break;
            }
            default:{cout<<"invalid option"<<endl;}
        }
    }
}
