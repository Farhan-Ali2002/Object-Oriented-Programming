#include <iostream>
using namespace std;

int main()
{
   int i,j,x,k,t=1;
   x=4+4-1;
   for(i=1;i<=4;i++)
   {
         for(k=x;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<t++<<" ";
	cout<<endl;
    x--;
   }
}