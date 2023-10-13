#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int ans=0,i=0;
    if(n>=0)
    {
        while(n!=0){
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        i+=1;
        n=n>>1;
    }
    }
    else{
        int i ;
    }
    cout<<ans;
    return 0;
}