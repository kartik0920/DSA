#include <iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortbycount(int arr[],int size){
    int count0=0,count1=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count0+=1;
        }
        else if(arr[i]==1){
            count1+=1;
        }

    }
    count1+=count0;
    for(int i=0;i<size;i++){
        if(i<count0){
            arr[i]=0;
        }
        else if(i>=count0 && i<count1){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }
    }
    printArr(arr,size);   
}
void sortarr(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int mini=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    printArr(arr,size);
}
int main ()
{
    int arr[]={0,1,2,0,1,1,2,0,1,0,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    printArr(arr,size);
    sortarr(arr,size);

    return 0;
}