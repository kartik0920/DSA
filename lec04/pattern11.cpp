#include <iostream>
using namespace std;
int main ()
{
    char Ch='A';
    int n=4,i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<Ch<<" ";
            j++;
        }
        cout<<endl;
        Ch++;
        i++;
    }
    return 0;
}