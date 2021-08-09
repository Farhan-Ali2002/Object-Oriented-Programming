#include <iostream>
using namespace std;

int main()
{
    int i, a, total;

    cout << "Input the number of terms : ";
    cin >> a;
    for (i = 1; i <= a; i++) 
    {
        total = i * i * i;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << total<< endl;
    }
}
