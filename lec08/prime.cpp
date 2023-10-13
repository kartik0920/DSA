#include <iostream>
using namespace std;
bool ISprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main ()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    if(ISprime(n)){
        cout<<"It is prime number"<<endl;
    }
    else{
        cout<<"It is not prime number"<<endl;
    }
    return 0;
}