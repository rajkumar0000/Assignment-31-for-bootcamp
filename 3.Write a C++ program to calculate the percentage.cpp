/*
3. Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.
*/
#include<iostream>
using namespace std;
class marks
{
private:
    int physics , chemistry , math ;
public:
    void setPhyMark()
    {
        cout<<"enter physics marks : ";
        cin>>physics;
    }
    void setChemMark()
    {
        cout<<"enter chem marks : ";
        cin>>chemistry;
    }
    void setMathMark()
    {
        cout<<"enter math marks : ";
        cin>>math;
    }
    int getPhyM()
    {
        return physics;
    }
    int getChemM()
    {
        return chemistry;
    }
    int getMathM()
    {
        return math;
    }
};

class calculation :public marks
{
private:
    int totalMarks , percentage ;
public:
    void calTotalM()
    {
        totalMarks=getPhyM()+getChemM()+getMathM();
    }
    void calPercentage()
    {
        percentage=(getPhyM()+getChemM()+getMathM())/3;
    }
    int getTotalM()
    {
        calTotalM();
        return totalMarks;
    }
    int getPercent()
    {
        calPercentage();
        return percentage;
    }
};
class student : public calculation
{
private:
    char name[20];
    int roll;
public:
    void setname()
    {
        cout<<"enter name : ";
        cin>>name;
    }
    void setRoll()
    {
        cout<<"enter roll : ";
        cin>>roll;
    }
    int getroll()
    {
        return roll;
    }
    char* getname()
    {
        return name;
    }
    void display()
    {
        cout<<"\n--------------------------\n";
        cout<<"Id/Id  : "<<roll<<endl;
        cout<<"Name   : "<<name<<endl;
        cout<<"phy M  : "<<getPhyM()<<endl;
        cout<<"Chem M : "<<getChemM()<<endl;
        cout<<"Math M : "<<getMathM()<<endl;
        cout<<"TotalM : "<<getTotalM()<<endl;
        cout<<"Percent: "<<getPercent()<<endl;
        if(getPercent()>=33)
            cout<<"Result : PASS"<<endl;
        else
            cout<<"Result : Fail"<<endl;
    }
};

int main()
{
    student s;
    s.setRoll();
    s.setname();
    s.setPhyMark();
    s.setChemMark();
    s.setMathMark();
    s.display();

    return 0;
}
