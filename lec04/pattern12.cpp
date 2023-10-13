#include <iostream>
using namespace std;
int main ()
{
    
    int n=3,i=1;
    while(i<=n){
        int j=1;
        char Ch='A';
        while(j<=n){
            cout<<Ch<<" ";
            Ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}