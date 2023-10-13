#include <iostream>
using namespace std;
int main ()
{
    int n=4;
    int i=1;
    while(i<=n){
        int k=i,j=1;
        while(j<=i){
            cout<<k<<" ";
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}