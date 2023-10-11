#include <iostream>
using namespace std;
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
    cout<<"Enter size";
    cin>>size;
    cout<<"Enter the array:"<<endl;
    scanArr(arr,size);
    cout<<"Enter key you want to compare:";
    int key;
    cin>>key;
    cout<<"Array given was"<<endl;
    printArr(arr,size);
    cout<<endl;
    for(int i=0;i<size;i++){
        for( int j=i+1;j<size;j++){
                if(arr[i]+arr[j]==key){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                    arr[j]=-1;
                    arr[i]=-1;
                }
        }
    }
    return 0;
}