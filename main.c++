/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Hamza Iqbal
 */


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
    cout<<endl<<"Enter a type of venue";
    fflush(stdin);
    getline(cin,venue_type);
    cout<<endl<<"Enter a year of open";
    fflush(stdin);
    cin>>year_opened;
    cout<<endl<<"Enter a capacity";
    fflush(stdin);
    cin>>capacity;
    cout<<endl<<"Enter a base price";
    fflush(stdin);
    cin>>base_price;
   
    return base_price * capacity; //return the base_price * capacity
}
