#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream my_file;
    my_file.open("data.txt");
    if(!my_file){
        cout<<"File Not Found !";
    }
    string correct_ans;
    getline(my_file,correct_ans);
    string student_ID;
    while(my_file>>student_ID){

        string answers;
        getline(my_file,answers);

        int score=0;
        for(int i=0;i<20;i++){
            if(answers[i]==' ')
                continue;
            else if(answers[i]==correct_ans[i])
                score+=2;
            else if(score!=0)
                score--;
        }

        cout<<student_ID<<answers<< ' ' <<score<< ' ';
        float grade =(float)score/20*100;

        if(grade<=100 && grade>=90)
            cout<<'A'<<endl;
        else if(grade<=89.99 && grade >=80)
            cout<<'B'<<endl;
        else if(grade<=79.99 && grade >=70)
            cout<<'C'<<endl;
        else if(grade<=69.99 && grade >=60)
            cout<<'D'<<endl;
        else
            cout<<'F'<<endl;
    }
    my_file.close();
    return 0;

}
    
