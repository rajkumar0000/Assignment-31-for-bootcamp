/*
5. Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format.
*/
#include<iostream>
using namespace std;

class item
{
private:
    int item_No , price ;
    char item_name[20];
public:
    void setItemName()
    {
        cout<<"enter item name  :";
        cin>>item_name;
    }
    void setItemNo()
    {
        cout<<"enter item No. : ";
        cin>>item_No;
    }
    void setPrice()
    {
        cout<<"enter item price : ";
        cin>>price;
    }
    int getprice()
    {
        return price;
    }
    int getItem_no()
    {
        return item_No;
    }
    char* getItemname()
    {
        return item_name;
    }

};
class discount:public item
{
private:
    int discount;
public:
    void setDiscount()
    {
        cout<<"enter discount :";
        cin>>discount;
    }
    int getdiscount()
    {
        return discount;
    }
};
class items:public discount
{

};
int main()
{
    cout<<"how by Items : ";
    int n;
    cin>>n;
    items itm[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nenter "<<i+1<<" Item detail"<<endl;
        itm[i].setItemNo();
        itm[i].setItemName();
        itm[i].setPrice();
        itm[i].setDiscount();
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\n------------\n";
        cout<<"item No.    :"<<itm[i].getItem_no()<<endl;
        cout<<"item name   :"<<itm[i].getItemname()<<endl;
        cout<<"item price  :"<<itm[i].getprice()<<endl;
        cout<<"discount    :"<<itm[i].getdiscount()<<endl;
    }
    cout<<endl<<endl;
    int totalDiscount=0 , totalPrice=0 ;
    for(int i=0;i<n;i++)
    {
        totalDiscount=totalDiscount+itm[i].getdiscount();
        totalPrice=totalPrice+itm[i].getprice();
    }
    cout<<"\n---------------------\n";
    cout<<"total price         :"<<totalPrice<<endl;
    cout<<"total discount      :"<<totalDiscount<<endl;
    cout<<"payable price       :"<<totalPrice-totalDiscount<<endl;
    return 0;
}
