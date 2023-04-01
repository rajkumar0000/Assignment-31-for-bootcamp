/*
8 - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.
*/
#include<iostream>
using namespace std;
class Custommer
{
protected:
    char name[20];
    long long pho_no;
public:
    void setName()
    {
        cin.clear();
        cout<<"enter name : ";
        cin>>name;
    }
    void setPhon_no()
    {
        cin.clear();
        cout<<"enter ph.No. : ";
        cin>>pho_no;
    }
};

class Depositor : public Custommer
{
protected:
    int ac_no;
    int balence;
public:
    void setAc_No()
    {
        cin.clear();
        cout<<"enter Ac.No. : ";
        cin>>ac_no;
    }
    void setbalence_depositor()
    {
        cin.clear();
        cout<<"enter balence for deposit : ";
        cin>>balence;
    }
};

class Borrower :public Depositor
{
protected:
    int loan_amount;
    int loan_no;
public:
    void setLoan_amount()
    {
        cin.clear();
        cout<<"enter loan Amount : ";
        cin>>loan_amount;
    }
    void setLoan_no()
    {
        cin.clear();
        cout<<"enter Loan No. : ";
        cin>>loan_no;
    }
    void setDetails()
    {
        setName();
        setPhon_no();
        setAc_No();
        setbalence_depositor();
        setLoan_no();
        setLoan_amount();
    }
    void display()
    {
        cout<<"\n\n--------------------------\n";
        cout<<"Name         :   "<<name<<endl;
        cout<<"Pho.No.      :   "<<pho_no<<endl;
        cout<<"Acount No.   :   "<<ac_no<<endl;
        cout<<"Balence      :   "<<balence<<endl;
        cout<<"Loan No.     :   "<<loan_no<<endl;
        cout<<"Loan Amount  :   "<<loan_amount<<endl;
        cout<<"------------------------------\n";
    }
};
int main()
{
    Borrower *lst[10];
    int counts=0;

    while(1)
    {
        cout<<"1.entry."<<endl;
        cout<<"2.Show. "<<endl;
        int n;
        cin>>n;
        switch(n)
        {
        case 1:
            {
                Borrower *temp;
                temp=new Borrower;
                temp->setDetails();
                cout<<"entry successfull "<<endl;
                lst[counts++]=temp;
                //delete temp;
                break;
            }
        case 2:
            {
                for(int i=0;i<counts;i++)
                {
                    lst[i]->display();
                }
            }
        }
    }
}
