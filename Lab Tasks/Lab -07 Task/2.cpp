#include<iostream>
#include<fstream>
using namespace std;
int main(){

    // first we take input from the user
    int a,b;
    string c;
    cout<<"Enter the table value => ";
    cin>>a;
    cout<<"Enter the final value => ";
    cin>>b;
    cin.ignore();
    cout<<"Enter the File Name => ";
    getline(cin,c);
    
    // Now we will create the file and store the table 
    fstream my_file;
    my_file.open(c,ios::out);
    my_file<<"Table Of "<<a<<" is "<<endl;
    for(int i=1;i<=b;i++){
        my_file<<a<<" x "<<i<<" = "<<a*i<<endl;
    }
    my_file.close();
    //now we will open the file and read the data from it.
    my_file.open(c,ios::in);

    string y;
    while(1){
        getline(my_file,y);
        cout<<y<<endl;
        if(my_file.eof()){
            break;

        }
        

        
    }


}
