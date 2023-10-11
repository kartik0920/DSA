#include<iostream>
using namespace std;
int facto(int n){
    int ans=1;
    while(n!=0){
        ans=ans*n;
        n--;
    }
    return ans;
}
int nCr(int n,int r){
    int ans=facto(n)/(facto(r)*facto(n-r));
    return ans;
}
int main(){
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    cout<<"nCr is "<<nCr(n,r);
    return 0;
}