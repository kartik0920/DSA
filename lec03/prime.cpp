#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int i=2,temp=0;
    while(i<n){
        if(n%i==0){
            temp++;
            cout<<"It is not prime";
            break;
        }
        i++;
    }
    if(temp==0){
        cout<<"It is prime";
    }

    return 0;
}