#include <iostream>
using namespace std;
int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
void scanArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main ()
{
    int arr[1000],size;
    cout<<"Enter size of array";
    cin>>size;
    cout<<"Enter  array"<<endl;
    scanArr(arr,size);

    cout<<"Unique element in array is:"<<unique(arr,size)<<endl;
    printArr(arr,size);


    return 0;
}   