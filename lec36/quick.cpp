#include <iostream>
using namespace std;
void printArr(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<e;i++){
        if(pivot>arr[i]){
            cnt+=1;
        }
    }
    int pivotIndex=s+cnt;
    swap(arr[s],arr[pivotIndex]);


    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
}
void quicksort(int* arr,int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

}
int main()
{
    int arr[]={3,55,7,9,8,5,01,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"B4 doer:";
    printArr(arr,size);
    quicksort(arr,0,size-1);
    cout<<"after sort:";
    printArr(arr,size);
    return 0;
}