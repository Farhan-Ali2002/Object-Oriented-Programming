#include<iostream>
using namespace std;
int lds(int arr[3][3]){
    int lds=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            if(i==j){
                lds+=arr[i][j];
            }
        }
    return lds;
}

int main(){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"The sum of left diagonal is "<<lds(arr);
}