#include<iostream>
using namespace std;
class stringType{
    public:
    // functions prototype and variables
        string str1,str2;
        void copy(string s1,string s2);
        void setValues(string s1,string s2);
        void printValue();
        int maxLength();
        string concat(string st1,string st2);
        int compare(string st1,string st2);
        int search_word(string word);
        int search_char;



            


};

//---------------------------------------------------------------------

// Functions


void stringType::setValues(string s1,string s2){
    str1=s1;
    str2=s2;
}

void stringType::printValue(){
    cout<<"String 1 = "<<str1<<"\n"<<"String 2 = "<<str2<<endl;
}

int stringType::maxLength(){
    int i,j;
    for(i=0;str1[i];i++){
    }
    for(j=1;str2[j];j++){
    }
    if(i>j)
        return i;
    else if(i==j)
        cout<<"Both Are Equal "<<endl;
    else
        return j;



}
int stringType::compare(string st1,string st2){
    int i,j;
    for(i=0;str1[i];i++){
    }
    for(j=1;str2[j];j++){
    }
    if(i>j)
        return i;
    else if(i==j)
        cout<<"Both Are Equal "<<endl;
    else
        return j;

}

void stringType::copy(string s1,string s2){
    s2=s1;

}

string stringType::concat(string st1, string st2){
    string sum;
    sum=st1+st2;
    return sum;
}

//-----------------------------------------------------------------------

int main(){
// Creating Class object and calling the functions......
    stringType s;
    s.setValues("hassan","hassan");
    string s1="Hassan";
    string s2="Ali";
    string s3=s.concat(s1,s2);
    s.copy(s1,s2);
    s.maxLength();

}