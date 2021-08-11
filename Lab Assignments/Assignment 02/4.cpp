#include<iostream>
using namespace std;
class Father{
    public:
        Father(){
            cout<<"I am father & I got a new life :-) "<<endl;
        }
        ~Father(){
            cout<<"I am father & I am going to die :-( "<<endl;
        }

};

class Mother{
    public:
        Mother(){
            cout<<"I am mother & I got a new life :-) "<<endl;
        }
        ~Mother(){
            cout<<"I am mother & I am going to die :-( "<<endl;
        }

};

class Child:public Father,Mother{
    public:
        Child(){
            cout<<"I am child & I got a new life :-) "<<endl;
        }
        ~Child(){
            cout<<"I am child & I am going to die :-( "<<endl;
        }
};

int main(){
    Child c1;

}