#include <iostream>
using namespace std;
int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];

    }
    return ans;
}
int main ()
{
    int arr[]={1,1,2,2,3,5,7,5,7,3,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<unique(arr,size);
    return 0;
}