#include<iostream>
using namespace std;
int main(){
    float num1,num2,result;
    char op;
    cout<<"Enter Any Number => ";
    cin>>num1;
    cout<<"Enter Any 2nd Number =>";
    cin>>num2;
    cout<<"Enter the operator (+ , - , * , / ) ";
    cin>>op;
    if(op=='+'){
        result=num1+num2;
        cout<<"Addition Of "<<num1<<op<<num2<<" is "<<result<<endl;
    }
    else if(op=='-'){
        result=num1-num2;
        cout<<"Subtraction Of "<<num1<<op<<num2<<" is "<<result<<endl;
    }
    else if(op=='*'){
        result=num1*num2;
        cout<<"Multiplication Of "<<num1<<op<<num2<<" is "<<result<<endl;
    }
    else{
        result=num1/num2;
        cout<<"Division Of "<<num1<<op<<num2<<" is "<<result<<endl;
        if(num2==0){
            cout<<"Cannot Be Divided By Zero"<<endl;
        }
    }
}
