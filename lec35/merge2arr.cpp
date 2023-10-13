#include <iostream>
using namespace std;
void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int *arr1, int m, int *arr2, int n, int *arr3)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < n)
    {
        arr3[k++] = arr2[j++];
    }
}
int main()
{
    int m = 5, n = 4;
    int arr1[m] = {1, 2, 3, 4, 5};
    int arr2[n] = { 7, 8, 9, 10};
    int k = m + n, arr3[k];
    merge(arr1, m, arr2, n, arr3);
    cout << "Array will be:" << endl;
    printArr(arr3, k);
    return 0;
}