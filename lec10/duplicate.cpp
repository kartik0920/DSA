#include <iostream>
using namespace std;
int duplicate(int arr[],int size){
    int sum1=0,sum2=0;
    for(int i=0;i<size;i++){
        sum1+=arr[i];
        sum2+=(i);
    }
    return sum1-sum2;
}
void scanArr(int arr[],int size){
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void printArr(int arr[],int size){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main ()
{
    int arr[1000], size;
    cout<<"Enter size of array:";
    cin>>size;
    cout<<"Enter the array"<<endl;
    scanArr(arr,size);

    cout<<"Duplicate element is "<<duplicate(arr,size)<<endl;
    printArr(arr,size);
    return 0;
}