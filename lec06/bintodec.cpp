#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
    int bin;
    cout<<"Enter the binary:";
    cin>>bin;
    int ans=0,i=0;
    while(bin!=0){
        int rem=bin%10;
        if(rem==1){
            ans=(rem*pow(2,i))+ans;
        }
        bin/=10;
        i++;
    }
    cout<<ans;
    return 0;
}