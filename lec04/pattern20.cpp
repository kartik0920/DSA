#include<iostream>
using namespace std;
 int main(){
    int i=0,n=3;
    while(i<n){
        int j=0;
        while(j<n){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<i+1;
            }
            j++;
        } 
        cout<<endl;
        i++;
    }
    return 0;
 }:D