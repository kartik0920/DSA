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
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    if(n>=0){
        cout<<"The factorial of "<<n<<" is "<<facto(n);
    }
    else{
        cout<<"Enter positive number";
    }
    return 0;
}