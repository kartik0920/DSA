#include<iostream>
using namespace std;
int main (){
    int n,i=1,sum=0;
    cout<<"Enter the n:";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}