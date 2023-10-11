#include<iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selection(int arr[],int size){
    for (int i=0;i<size-1;i++){
        int MinIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[MinIndex]>arr[j]){
                MinIndex=j;
            }
        }
        swap(arr[i],arr[MinIndex]);
    }
    printArr(arr,size);
}
int main(){
    int arr[]={12,53,8,5,8,0,7,4,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array b4 sort:";
    printArr(arr,size);
    cout<<endl<<"Array after sort:";
    selection(arr,size);

    return 0;
}