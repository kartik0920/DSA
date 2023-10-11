#include <iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void swap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main ()
{
    int arr[]={1,2,3,4,1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    swap(arr,size);
    printArr(arr,size);
    return 0;
}