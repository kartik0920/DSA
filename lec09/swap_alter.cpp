
// unique elemetn
// intersection in 2 array
#include <iostream>
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void Swap(int arr[],int size){
    int i=0;
    while(i<size-1){
        swap(arr[i],arr[i+1]);
        i=i+2;
    }
}
using namespace std;
int main ()
{
    int arr[]={1,2,6,3,4,6,4,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    Swap(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}