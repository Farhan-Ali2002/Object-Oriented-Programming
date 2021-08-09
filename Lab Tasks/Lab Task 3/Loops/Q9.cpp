#include <iostream>
using namespace std;

int main()
{
     int a, b, c, rev = 0;

     cout << "Enter a positive number: ";
     cin >> b;

     a = b;

     do
     {
         c = b % 10;
         rev = (rev * 10) + c;
         b = b / 10;
     } while (b!= 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (a == rev)
         cout << " The number is a palindrome."<<endl;
     else
         cout << " The number is not a palindrome."<<endl;

    return 0;
}