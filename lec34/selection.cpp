#include <iostream>
using namespace std;
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort(int arr[], int size)
{
    if (size == 0 or size == 1)
    {
        return;
    }
    int min_index = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[min_index] > arr[i])
        {
            min_index = i;
        }
    }
    swap(arr[min_index], arr[0]);
    sort(arr + 1, size - 1);
}
int main()
{
    int arr[] = {2, 6, 3, 4, 7, 8, 9, 5, 1, 10};
    int size = 10;
    cout << "Before swap:";
    printArr(arr, size);
    sort(arr, size);
    cout << "after swap:";
    printArr(arr, size);
    return 0;
}