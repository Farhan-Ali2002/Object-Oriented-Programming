#include <iostream>
using namespace std;

int main() {
  int arr[] = {3, 5, 2, -4, 8, 11};
  int sum=7;

  int arrsize = *(&arr + 1) - arr;     //for finding size of array 
  for(int i=0;i<arrsize;i++){          // now we will use nested for loop to access the first and second element 
      for(int j=i+1;j<arrsize;j++){
          if(arr[i]+arr[j]==sum){       // to check if first element and second element in array sum equal to givin sum number
              cout<<"["<<arr[i]<<" , "<<arr[j]<<"] ";
              
          }
          

        }
    } 
}

