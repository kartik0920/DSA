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
void scanArr(int arr[], int size)
{
    cout << "Enter the array::::>>>>>" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
bool isSorted (int arr[],int size){
    if(size==0){
        return 1;
    }
    if(size==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int *arr = new int[n];
    scanArr(arr, n);
    int sort = isSorted(arr, n);
    if(sort){
        cout << "Sorted array!";
    }
    else{
        cout << "Not sorted array!";
    }
    printArr(arr, n);
    delete[] arr;
    printArr(arr, n);
    return 0;
}