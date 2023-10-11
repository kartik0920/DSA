#include <iostream>
using namespace std;
int main ()
{
    uint32_t n=7;
    int count=0;
    while(n!=0){
        if(n&1){
            count+=1;
        }
        n=n>>1;
    }
    cout<<"the no of 1's are "<<count<<endl;
    return 0;
}