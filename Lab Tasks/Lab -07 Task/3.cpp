#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
    //First we take input from user 
    string mvn;
    float atp,ctp,gross_amount,amount_donated,net_sale;
    int natp,nctp,tickets_sold;
    float perc;

    cout<<"Enter The Movie Name => ";
    getline(cin,mvn);

    cout<<"Enter The Adult Ticket Price => ";
    cin>>atp;

    cout<<"Enter The Child Ticket Price => ";
    cin>>ctp;

    cout<<"Enter The Number Of Adult Tickets Sold => ";
    cin>>natp;

    cout<<"Enter The Number Of Child Ticket Sold => ";
    cin>>nctp;

    cout<<"Enter The Percentage Of Gross Amount Donated => ";
    cin>>perc;
    // Now we made calculations of entered values
    gross_amount=(atp*natp)+(ctp*nctp);
    amount_donated=gross_amount*(perc/100);
    net_sale=gross_amount-amount_donated;
    tickets_sold=natp+nctp;
    
    // Now We Open File and write the data 

    fstream my_file;
    my_file.open("Data.txt",ios::out);
    my_file<<setfill('.');
    my_file<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl<<
    "Movie Name: "<<setw(15)<<" "<<right<<mvn<<endl
    <<"Number Of Tickets Sold: "<<setw(15)<<" "<<right<<tickets_sold<<endl
    <<"Gross Amount: "<<setw(25)<<" "<<"$ "<<gross_amount<<endl
    <<"Percentage Of Gross Amount Donated: "<<setw(15)<<" "<<perc<<" %"<<endl
    <<"Amount Donated: "<<setw(15)<<" "<<"$ "<<amount_donated<<endl
    <<"Net Sale: "<<setw(15)<<" "<<"$ "<<net_sale<<endl<<endl;
    // To Check If File is created or not
    if(!my_file){
        cout<<"File Not Created :-("<<endl;
    }
    else{
        cout<<"File Created Successfully :-)"<<endl;
    }

    my_file.close();

















}