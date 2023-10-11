#include <iostream>
using namespace std;
int main ()
{
    int i=0,n=3;
    char Ch='A';
    while(i<n){
        int j=1; 
        Ch=Ch+i;
        while(j<=n){
            cout<<Ch<<" ";
            Ch++;
            j++;
        }
        cout<<endl;
        Ch='A';
        i++;
    }
    return 0;
}