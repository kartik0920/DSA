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
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
int Max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    cout << "Enter the size of array:";
    int size;
    cin >> size;
    int *arr = new int[size];
    scanArr(arr, size);
    printArr(arr, size);

    cout << "Maximum element is:" << Max(arr, size) << endl;
    cout << *arr;
    delete[] arr;
    cout << endl;
    cout << *arr;
    return 0;
}