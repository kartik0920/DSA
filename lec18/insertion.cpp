#include<iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1,temp=arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    printArr(arr,n);
    
}
int main(){
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array b4 sort:";
    printArr(arr,size);
    cout<<"Array after sort:";
    Insertion(arr,size);
    return 0;
}