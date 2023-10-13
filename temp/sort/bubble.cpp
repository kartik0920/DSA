#include <iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printArr(arr,n);
}
int main ()
{

    int arr[]={2,5,3,81,31};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array b4 sort:";
    printArr(arr,size);
    cout<<"array after sort is:";
    bubble(arr,size);
}