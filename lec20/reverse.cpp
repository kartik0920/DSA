#include <iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse_arr(int arr[],int size){
    int s=0,e=size-1;
    while(e>=s){
        swap(arr[s++],arr[e--]);
    }
}
int main ()
{
    int arr[]={1,5,2,10,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array b4 reverse:";
    printArr(arr,size);
    cout<<"Array after reverse:";
    reverse_arr(arr,size);
    printArr(arr,size);
    return 0;
}