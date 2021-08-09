#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter any number => ";
cin>>a;
switch(a%2){

    case 0:
    cout<<a<<" is Even Number !"<<endl;
    break;

    case 1:
    cout<<a<<" is Odd Number !"<<endl;
    break;
}

}