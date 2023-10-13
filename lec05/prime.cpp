#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a:";
    cin>>a;
    bool Isprime=true;
    for(int i=2;i<a;i++){
        if(a%i==0){
            Isprime=false;
            break;
        }
    }
    if(Isprime==true){
        cout<<"It is a Prime number";
    }
    else{
        cout<<"Is is not a Prime number";
    }
    return 0;
}