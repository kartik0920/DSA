#include <iostream>
using namespace std;
int main ()
{
    char Ch='A';
    int i=1,n=3;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<Ch<<" ";
            Ch++;
            j++;
        }
        cout<<endl;
       
        
        i++;
    }
    return 0;
}