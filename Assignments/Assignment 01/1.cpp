#include<iostream>
using namespace std;

void matr(int arr[2][2]){
// for taking element in rows and columns
    cout<<"Enter the Elements in matrix => "<<endl;
    for(int i=0;i<2;i++)      
        for(int j=0;j<2;j++){
            cout<<"Enter the element at ["<<i<<" "<<j<<"] ";
            cin>>arr[i][j]; 
        }
}
void show_matr(int arr[2][2]){

    
    cout<<"The Following matix is : "<<endl;


    for(int i=0;i<2;i++){
        cout<<endl;
        cout<<"[ ";
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<"  ";

        }
    cout<<"]";

    }
    cout<<endl;
}

// for sum of all elements in matrix
void sum_matr(int arr[2][2]){
int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum+=arr[i][j];
        }
    }    
        cout<<endl;
    cout<<"The Sum Of Matrix is => "<<sum<<endl<<endl;

}
void row_sum(int arr[2][2]){
    
    for(int i=0;i<2;i++){
        cout<<"The sum of row "<<i+1<<endl;
        int r_sum=0;
        for(int j=0;j<2;j++){
            r_sum+=arr[i][j];
            cout<<arr[i][j];
            if(j<2){
                cout<<" + ";
            }
        }
        cout<<" = "<<r_sum<<endl<<endl;
    }

}

void col_sum(int arr[2][2]){
    
    for(int i=0;i<2;i++){
        cout<<"The sum of col "<<i+1<<endl;
        int c_sum=0;
        for(int j=0;j<2;j++){
            c_sum+=arr[j][i];
            cout<<arr[j][i];
            if(j<1){
                cout<<" + ";
            }
        }
        cout<<" = "<<c_sum<<endl<<endl;
    }

}
void tp(int arr[2][2]){
    int trans[2][2]={0};
    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            trans[i][j] = arr[j][i];
        }   
    }   
    show_matr(trans);



}

int main(){

    int arr[2][2];
    matr(arr);

    
    cout<<"Welcome User Now What do want to do !"<<endl<<endl
    <<"A = For Displaying Matrix "<<endl
    <<"B = For Sum Of Matrix "<<endl
    <<"C = To Display Sum Of Row Wise Matrix"<<endl
    <<"D = To Display Sum Of Column Wise Matrix"<<endl
    <<"E = To Create Transpose "<<endl
    <<"F = For Showing the menu"<<endl<<endl;
    
        

char y='Y';
while(y='Y'){
    char c;
    
    cout<<"Press A,B,C,D,E,F => ";
    cin>>c;
    switch(c){
        case 'A':
            show_matr(arr);
            break;
        case 'B':
            sum_matr(arr);
            break;

        case 'C':
            row_sum(arr);
            break;
        case 'D':
            col_sum(arr);
            break;
        
        case 'E':
            tp(arr);
            break;

        case 'F':
        cout<<"A = For Displaying Matrix "<<endl
        <<"B = For Sum Of Matrix "<<endl
        <<"C = To Display Sum Of Row Wise Matrix"<<endl
        <<"D = To Display Sum Of Column Wise Matrix"<<endl
        <<"E = To Create Transpose "<<endl
        <<"F = For Showing the menu"<<endl<<endl;
    




    }
    cout<<"Do you want choose another option press Y for yes or Press N For Exit => "<<endl;

    cin>>y;
    if(y=='N'){
        break;
   
    }
}
}
