#include <iostream>
using namespace std;
void largerst(int a,int b,int c){
    if(a>b && a>c){
        cout<<"A is largest";
    }
    else{
        if(b>c){
            cout<<"B is largest";
        }
        else{
            cout<<"C is largest";
        }
    }
}
int main ()
{
    largerst(798    ,798,123);
    return 0;
}