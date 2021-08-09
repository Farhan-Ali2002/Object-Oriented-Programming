#include<iostream>
using namespace std;
int main (){
	float a,b,result;
	char c;
	cout<<"Enter Number => ";
	cin>>a;
	cout<<"Enter Second Number => ";
	cin>>b;
	cout<<"Enter the operator (+ , - , * , / ) ";
	cin>>c;
	switch(c){
	
		case '+':
			result=a+b;
			cout<<"The Addition Of "<<a<<" and "<<b<<" is "<<result<<endl;
			break;
		
		case '-':
			result=a-b;
			cout<<"The Subtraction Of "<<a<<" and "<<b<< " is "<<result<<endl;
			break;
		
		case '/':
			result=a/b;
			cout<<"The Division Of "<<a<< " and "<<b<< " is "<<result<<endl;
			break;
		
		case '*':
			result=a*b;
			cout<<"The Multiplication Of "<<a<<" and "<<b<<" is "<<result<<endl;
			break;



	}
	
	
	
}


