#include <iostream>
using namespace std;
void scan2D(int arr[][4],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}
bool isFound(int arr[][4],int m,int n,int key){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(key==arr[i][j]){
                return 1;
            }
        }
    }
    return 0;
}
int main ()
{
    int arr[3][4];
    int row=3,col=4;
    scan2D(arr,row,col);
    int key;
    cout<<"Enter the key you want ti search:";
    cin>>key;
    if(isFound(arr,row,col,key)){
        cout<<"Key was found!";
    }
    else{
        cout<<"Key was not found!";
    }
    return 0;
}