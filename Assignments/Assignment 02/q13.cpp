#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
void getData(string names[10],int scores[10][5]);
float avrgscoregrade(int scores[10][5],char grades[10]);
void output(string names[5],int scores[10][5],char grades[10]);
    


void getData(string names[10],int scores[10][5]){

    ifstream student_file("student.txt");
        
        

        for(int i=0;i<10;i++){
            student_file>>names[i];
            for(int j=0;j<5;j++){
                student_file>>scores[i][j];
            }
        }

        student_file.close();
    
}



float avrgscoregrade(int scores[10][5],char grades[10]){

    int sum=0 , sum_grade=0;
    float avgscore,avgstudent;


    for(int i=0;i<10;i++){

        for(int j=0;j<5;j++){
            sum_grade+=scores[i][j];
        }
        avgstudent=sum_grade/5.0;
        sum+=avgstudent;

        if(avgstudent>=90)
            grades[i]='A';
        else if (avgstudent>=80)
            grades[i]='B';
        else if (avgstudent>=70)
            grades[i]='C';
        else if (avgstudent>=60)
            grades[i]='D';
        else if (avgstudent>=50)
            grades[i]='E';
        else 
            grades[i]='F';
    
        sum_grade=0;
    }

    avgscore=sum/10.0;
    return avgscore;

}


void output(string names[5],int scores[10][5],char grades[10]){
    for(int i=0;i<5;i++){
        cout<<"Student "<<names[i]<<" got "<<grades[i]<<endl;
    }
}

int main(){
    string names[10];
    int scores[10][5];
    float avgscore;
    char grades[10];
    ifstream student_file("student.txt");
    if(!student_file){
        cout<<"File Not Found :-("<<endl;
        student_file.close();
    }
    else{


    getData(names,scores);
    avgscore=avrgscoregrade(scores,grades);
    cout<<"The Class average score is "<<avgscore<<endl;

    output(names,scores,grades);
    return 0;
    }
}







