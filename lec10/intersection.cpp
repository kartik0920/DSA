#include <iostream>
using namespace std;
int main ()
{
    int arr1[]={1,2,3,4,5},m=5;
    int arr2[]={1,2,3,5,7,8},n=6;
   /*for(int i=0;i<m;i++){
        int element=arr1[i];
        for(int j=0;j<n;j++){
            if(element==arr2[j]){
                cout<<element<<endl;
                break;
            }
            else if(element<arr2[j]){
                break;
            }
        }
    }*/
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<endl;
            i++;
            j++;
        }
        else if (arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }

       
    }
    return 0;
}