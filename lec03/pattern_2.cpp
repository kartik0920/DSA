#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cout<<"Enter n:";
    cin>>n;
    while(i<=n){
        int j=0;
        while(j<n){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}