#include <iostream>
#include<cmath>
using namespace std;
bool Ispositive(int n){
    if(n>=0){
        return true;
    }
    return false;
}
int main ()
{  
    int n,binary=0,i=0;
    cout<<"Enter n:";
    cin>>n;
    int m=n;
    if(Ispositive(n)){   

    while(n!=0){
        int bit=n&1;
        binary=(bit*pow(10,i))+binary;
        i+=1;
        n=n>>1;
    }
    cout<<"Binary of "<<m<<" is "<<binary;
    }
    else{
        int m=-1*n;
        while(m!=0){
        int bit=m&1;
        binary=(bit*pow(10,i))+binary;
        i+=1;
        m=m>>1;
       
    }
    cout<<(~binary)&&1;
    }

    return 0;
}