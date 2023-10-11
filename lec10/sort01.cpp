#include <iostream>
using namespace std;
// void swap(int &a,int &b){
//     int temp=b;
//     b=a;
//     a=temp;
// }
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortbycount(int arr[],int size){
    int count0=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count0+=1;
        }
    }
    for(int i=0;i<size;i++){
        if(i<count0){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
}
void sortarr(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
            // printArr(arr,size);

        swap(arr[i],arr[minindex]);
    }
    printArr(arr,size);
}
void sort2point(int arr[],int size){
    int left=0,right=size-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        if(arr[left]==1 && arr[right]==0 && left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
       
       
     
    printArr(arr,size);
}
int main ()
{
    int arr[]={1,1,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort2point(arr,size);
    return 0;
}