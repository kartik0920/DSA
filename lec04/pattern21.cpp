#include<iostream>
using namespace std;
int main(){
    int n=4,i=0;
    while(i<n){
        int j=0;
        while(j<n){
            if(i<=j){
                cout<<j+1;
            }
            else{
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}