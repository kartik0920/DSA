#include <iostream>
using namespace std;

int main ()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3,n=3;
    int size=m;
    int ans[size],k=0;
    // Column sum
    /*for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[j][i];  
        }
        ans[k++]=sum;
    }*/

    // row sum
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        ans[k++]=sum;
    }
    for (int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}