#include <iostream>
using namespace std;
int sumArr(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main ()
{   
    int arr[]={-3,4,7,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<sumArr(arr,size);

    return 0;
}