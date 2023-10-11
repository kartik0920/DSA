#include<iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Bubble(int arr[],int size){
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    printArr(arr,size);
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array b4 sort:";
    printArr(arr,size);
    cout<<endl<<"Array after sort:";
    Bubble(arr,size);
    return 0;
}