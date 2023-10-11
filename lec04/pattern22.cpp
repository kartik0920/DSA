#include<iostream>
using namespace std;
 int main(){
    int i=0,n=3,k=1;
    while(i<n){
        int j=0;
        while(j<n){
            if(j<i){
                cout<<" ";
            }
            else{
                cout<<k;
                k++;
            }
            j++;
        } 
        cout<<endl;
        i++;
    }
    return 0;
 }