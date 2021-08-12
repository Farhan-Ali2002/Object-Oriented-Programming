#include<iostream>
using namespace std;
int num_ways(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    else{
        int count=0;
        for(int j=1;j<n;j++)
        count+=num_ways(n-2)+num_ways(n-1);
        return count;
    }
    
}
int main(){
    cout<<num_ways(2);
}