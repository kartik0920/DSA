#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    if(n>0){
        cout<<"+ve";
    }
    else if (n==0){
        cout<<"Zero";
    }
    else{
        cout<<"-ve";
    }
    return 0;
}