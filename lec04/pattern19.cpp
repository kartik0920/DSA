#include <iostream>
using namespace std;
int main ()
{
    int n=4,i=0;
    while(i<n){
        int j=0;
        while(j<n){
            if(0>(j-i)){
                cout<<" ";
            }
            else{
                cout<<i+1;
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}