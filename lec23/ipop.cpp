#include <iostream>
using namespace std;
void scan2D(int arr[][4],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}
void print2D(int arr[][4],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main ()
{
    int arr[3][4];
    int row=3,col=4;
    scan2D(arr,row,col);
    print2D(arr,row,col);
    return 0;
}