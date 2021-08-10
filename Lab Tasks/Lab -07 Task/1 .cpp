#include<iostream>
#include<fstream>
using namespace std;
int main(){

    //First we create the file
    fstream my_file;
    my_file.open("Hassan.txt",ios::out);
    
    //We write some data into the file 

    my_file<<"Hi Im Hassan Ali"<<endl<<
    "Student Of Fast University "<<endl
    <<"Peshawar Campus"<<endl
    <<"I have alot intrest in Computer science"<<endl<<endl
    <<"Thank you !";

    my_file.close();

    // Now We open the file

    my_file.open("Hassan.txt",ios::in);

    if(!my_file){
        cout<<"File Not Found !";
    }
    else{

    string line;
    int i;

    // now we use while loop to iterate over file 
    while (1)
    {
    // we use getline func to get lines from files and then we just increment 
        getline(my_file,line);
        i++;
        // to check if the file is is end (eof = end of the file) we simply break
        if(my_file.eof()){
            break;
        }

    }
    //now we print the number of lines
    cout<<"The Number Of Lines in file is => "<<i--<<endl;
    my_file.close();
    }

}