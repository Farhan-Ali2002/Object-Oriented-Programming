#include<iostream>
using namespace std;

void r_mult(int a[4][6]){
int r_mult;
for(int i=0;i<4;i++){
    cout<<"The Multiplication of row => "<<i+1<<endl;
    r_mult = 1;
    for(int j=0;j<6;j++){
        r_mult*=a[i][j];
        cout<<a[i][j];
        if(j<5){
            cout<<" x ";
        }
    }
    cout<<" = "<<r_mult<<endl<<endl;
}


}

int main()
{
int a[4][6] = {{1,2,3,4,5,6},{2,4,5,8,9,10},{3,4,5,6,7,8},{2,4,6,8,10,12}};
r_mult(a);

}
