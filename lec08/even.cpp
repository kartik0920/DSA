#include<iostream>
using namespace std;
// bool Iseven(int n){
//     if(n&1==1){
//         return false;
//     }
//     return true;
// }
bool Iseven(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    if(Iseven(n)){
        cout<<"It is even number";
    }
    else{
        cout<<"It is odd number";
    }
}