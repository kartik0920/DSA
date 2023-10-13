#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n";
    int sum=0;
    cin>>n;
    for(int i=0;i<=n;i+=1){
        sum+=i;
    }
    cout<<sum;
    return 0;
}