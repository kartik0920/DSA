#include <iostream>
using namespace std;
int main ()
{
    int i=1,n=4;
    char Ch='A';

    while(i<n){
        int j=1;
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