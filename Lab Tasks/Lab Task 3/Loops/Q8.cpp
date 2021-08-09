#include<iostream>
using namespace std;

int main()
{
	int a,b,c,reverse=0;
	cout<<"Enter any number : ";
	cin>>a;
	b=a;

	while(b>0)
	{
		c=b%10;
		b=b/10;
		reverse=reverse*10+c;
	}

	cout<<"Reverse of number "<<a<<" is "<<reverse<<endl;


	return 0;
}
