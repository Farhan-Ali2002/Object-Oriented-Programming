#include<iostream>
using namespace std;
int main(){
    int num,result;
    num=2;
    result=0;
    do{
        result=result+num;
        num=num+2;
    }
    while(num<=100);
    cout<<"The Result Of Even Numbers Between 1 To 100 is => "<<result<<endl;
       
        
    
}