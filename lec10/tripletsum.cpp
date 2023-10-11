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
    int key,step=0;
    cin>>key;
    cout<<"Array given was"<<endl;
    printArr(arr,size);
    cout<<endl;
    for(int i=0;i<size;i++){
        for( int j=i+1;j<size;j++){
                for(int k=j+1;k<size;k++){
                    if(arr[i]+arr[j]+arr[k]==key){
                        cout<<"Step is"<<step++<<endl;
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                        arr[i]=-1;
                        arr[j]=-1;
                        arr[k]=-1;

                        

                    }
                }
        }
    }
    return 0;
}