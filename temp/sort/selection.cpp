#include <iostream>
using namespace std;
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
/*
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
    printArr(arr,n);
}*/
void selection(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i; j < n; j += 1)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
    printArr(arr, n);
}
int main()
{
    int arr[] = {2, 5, 3,121, 8, 31};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array b4 sort:";
    printArr(arr, size);
    cout << "array after sort is:";
    selection(arr, size);
}