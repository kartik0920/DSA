#include <iostream>
using namespace std;
int binsearch(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(e>=s){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main ()
{
    int arr[]={0,1,2,3,4,4,4,4,5,6,7,8,9,10,24,4324,132456};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter key:";
    cin>>key;
    cout<<"The "<<key<<" is present at "<<binsearch(arr,size,key)<<" of the array"<<endl;
    return 0;
}