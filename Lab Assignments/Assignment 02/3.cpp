#include<iostream>
using namespace std;
class Parent{
    public:
        Parent(){
            cout<<"I am parent & I got a new life :-) "<<endl;
        }
        ~Parent(){
            cout<<"I am parent & I am going to die :-( "<<endl;
        }

};

class Child:public Parent{
    public:
        Child(){
            cout<<"I am child & I got a new life :-) "<<endl;
        }
        ~Child(){
            cout<<"I am child & I am going to die :-( "<<endl;
        }
        
};

int main(){
    Child a1;
}