#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pro=1,sum=0;

    while(n!=0){
        int rem=n%10;
        sum+=rem;
        pro*=rem;
        n/=10;

    }
    cout<<pro<<" "<<sum<<" "<<pro-sum;
    return 0;
}