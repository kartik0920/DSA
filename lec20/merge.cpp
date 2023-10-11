// merging the 2 sorted array
#include <iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr1[],int m,int arr2[],int n,int arr3[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }

        

    }
    while(i<n){
            arr3[k++]=arr1[i++];
        }
        while(j<m){
            arr3[k++]=arr1[j++];
        }
}
int main ()
{
    int arr1[]={1,3,5,6,7,9,11};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,2,4,6,8};
    int n=sizeof(arr2)/sizeof(arr2[0]);
    int k=m+n;
    int arr3[k];
    merge(arr1,m,arr2,n,arr3);
    printArr(arr3,k);
    return 0;
}