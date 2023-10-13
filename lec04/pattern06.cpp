#include <iostream>
using namespace std;
int main ()
{
    int n=4;
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}