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
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int *first = new int[l1];
    int *second = new int[l2];
    int k = s;
    for (int i = 0; i < l1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < l2; i++)
    {
        second[i] = arr[k++];
    }

    int i = 0, j = 0;
    k = s;
    while (i < l1 && j < l2)
    {
        if (first[i] < second[j])
        {
            arr[k++] = first[i++];
        }
        else
        {
            arr[k++] = second[j++];
        }
    }
    while (i < l1)
    {
        arr[k++] = first[i++];
    }

    while (j < l2)
    {
        arr[k++] = second[j++];
    }
}
void mergesort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);

    merge(arr, s, e);
}
int main()
{
    int arr[] = {9, 8, 86, 5, 7, 2, 3, 4, 1, 0};
    int size = 10;
    mergesort(arr, 0, size - 1);
    cout << endl;
    printArr(arr, size);
    return 0;
}