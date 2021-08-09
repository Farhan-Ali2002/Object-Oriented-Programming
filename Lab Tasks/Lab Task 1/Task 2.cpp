#include<iostream>;
using namespace std;
int main(){
    int salary,total;
    cout<<"Enter Your Salary => ";
    cin>>salary;
    if(salary>=10000 && salary<20000){
        total=salary-1000;
        cout<<"Your net payable amount is "<<total<<endl;
    }
    else if(salary>=20000){
        total=salary*0.7;
        cout<<"Your Net Payable amount is "<<total<<endl;
    }
   else{
       cout<<"Your Net Payable amount is "<<salary<<endl;
   }
    }
    