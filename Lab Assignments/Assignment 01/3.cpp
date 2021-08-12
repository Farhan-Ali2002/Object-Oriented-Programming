#include<iostream>
using namespace std;
int main(){
    // We will First Take The Input from user to enter the elements of matrix
    int arr[2][2];
    cout<<"Enter the elements of matrix "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    // Now we will find the determinant first 

    float deter =(arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0]);
    
    //Now we will find the inverse 

    if(deter!=0){
    

        int swap=arr[0][0];              // we will swap the value as per inverse formula 
        arr[0][0]=arr[1][1];
        arr[1][1]=swap;

        arr[0][1]=arr[0][1]*-1;         // we will make the b & c index value minus as per inverse formula
        arr[1][0]=arr[1][0]*-1;

    //Now we will divide with the determinent

        float arr2[2][2];                    // we will make another array to store the inverse of previous array

        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                arr2[i][j]=1/deter*arr[i][j];
            }
        }
        // For printing the matrix of inverse
        cout<<"The Inverse Of Matrix Is ";
        for(int i=0;i<2;i++){
            cout<<endl;
            for(int j=0;j<2;j++){
                cout<<arr2[i][j]<<"\t";

                
            }
        }

    }

    else{
        cout<<"Inverse Is not possible"<<endl;
    }

}