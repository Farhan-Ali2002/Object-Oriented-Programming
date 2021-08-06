#include<iostream>
using namespace std;
int main()
{
    int m1[2][2]={{1,2},{3,4}};

    int m2[2][2]={{5,6},{7,8}};
    int s[2][2];
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            s[i][j] = m1[i][j]+m2[i][j];


        }
    }
    cout<<"Printing the Sum Of matrix"<<endl;
        for (int k = 0; k < 2; k++){ 
            cout<<"[";
            for (int l = 0; l < 2; l++){
                cout<<s[k][l]<<" ";
            }
            cout<<"]";
            cout<<endl;

        }

}