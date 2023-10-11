#include <iostream>
using namespace std;
bool LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
void scanArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int main ()
{
    int size,arr[100],key;
    cout<<"Enter size of an array:";
    cin>>size;
    cout<<"Enter key you want to search:";
    cin>>key;
    cout<<"\n Enter array:";
    scanArr(arr,size);
    if(LinearSearch(arr,size,key)){
        cout<<"Element is present :D";
    }
    else{
        cout<<"Element is not present :C";
    }
    return 0;
}