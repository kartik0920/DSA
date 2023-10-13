#include <iostream>
using namespace std;

void swap( int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void ReverseArr(int arr[],int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-1-i]);
    }
}
void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}
void ScanArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int main ()
{
    int size;
    cout<<"Enter size of an array";
    cin>>size;
    int arr[1000];
    ScanArr(arr,size);
    cout<<"Array before reverse: ";
    PrintArr(arr,size);
    cout<<"\nArray after reverse: ";
    ReverseArr(arr,size);
    PrintArr(arr,size);
    
    return 0;
}