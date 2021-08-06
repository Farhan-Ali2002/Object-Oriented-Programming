#include<iostream>
using namespace std;

void upr_half(int arr[5][5]){
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){   
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        for(int k=0;k<i+1;k++){
            cout<<"  ";
        }
    }
}

int main(){
int arr[5][5] = {{2,3,1,5,0},{7,1,5,3,1},{2,5,7,8,1},{0,1,5,0,1},{3,4,9,1,5}};

    upr_half(arr);

}



