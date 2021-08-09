#include <iostream>
using namespace std;
void prime(int n) {
   int i, x = 0;
   for(i=2; i<=n/2; ++i) {
      if(n%i==0) {
        x=1;
         break;
      }
   }
   if (x==0)
   cout<<n<<" is a prime number"<<endl;
   else
   cout<<n<<" is not a prime number"<<endl;
}
int main() {
   prime(11);
   prime(20);
   return 0;
}