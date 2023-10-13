#include <iostream>
using namespace std;
void fibo(int n){
    int first=0,second=1;
    cout<<first<<" "<<second<<" ";
    for(int i=0;i<n-2;i++){
        int third=first+second;
        cout<<third<<" ";
        first=second;
        second=third;
    }
}
int main ()
{
    int n=3,m=10;
    fibo(n);
    cout<<endl;
    fibo(m);
    return 0;
}