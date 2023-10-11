#include <iostream>
using namespace std;
int main ()
{
    int n=4;
    int i=1;
    while(i<=n){
        int j=1,k=i;
        while(j<=i){
            cout<<k<<" ";
            j++;
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}