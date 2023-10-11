#include <iostream>
using namespace std;
int main ()
{
    int n=3;
    int i=1,k=1;
    while(i<=n){
        int j=1;
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