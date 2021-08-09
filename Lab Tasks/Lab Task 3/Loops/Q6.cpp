#include<iostream>
using namespace std;

int main()
{
	int a,factorial=1;
	cout<<"Enter any number : ";
	cin>>a;

	while(a>=1)
	{
		factorial*=a;
		a--;
	}

	cout<<"Factorial => "<<factorial<<endl;


	return 0;
}
