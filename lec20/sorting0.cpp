// giving the last positions to zero

#include <iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort0(int arr[],int size){
    int i=0;
    for (int j=0;j<size;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i++]);
            
        }
    }

}
int main ()
{
    int arr[]={1,0,0,2,0,6,9,0,1,};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array b4:";
    printArr(arr,size);
    cout<<"Array after:";
    sort0(arr,size);
    printArr(arr,size);


    return 0;
}