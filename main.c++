#include<iostream>
using namespace std;
//base class
class Venue
{
    //data members
    protected:
    string venue_type;
    int year_opened,capacity;
    float base_price;
   
    protected: //member_functions()
        float potential_revenue();
};
//derived class
class Theater : public Venue
{
   private: //data members
       string venue_name,venue_address,venue_city,zip,state;
       float avg_con_sales;
   public: //member function
       float potential_revenue();
};
//definationof base class member function
float Venue :: potential_revenue()
{ //input the details
    cout<<endl<<"Enter the type of venue";
    fflush(stdin);
    getline(cin,venue_type);
    cout<<endl<<"Enter the year of open";
    fflush(stdin);
    cin>>year_opened;
    cout<<endl<<"Enter the capacity";
    fflush(stdin);
    cin>>capacity;
    cout<<endl<<"Enter the base price";
    fflush(stdin);
    cin>>base_price;
   
    return base_price * capacity; //return the base_price * capacity
}
