#include<iostream>
using namespace std;

double sum(double a){
    double factorial=1;
    double result=0;
    double i=1;
    while(i<=a){
        factorial=factorial*i;
        result=result+(factorial/i);
        i++;
    }
    return(result);
}
int main(){
    cout<<"the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 is "<<sum(5)<<endl;
}