#include <iostream>
using namespace std;
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i[arr] << " ";
    }
    cout << endl;
}
void insertion(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
}
int main()
{
    int arr[] = {2, 34, 1, 213, 5, 12, 42, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion(arr, size);
    printArr(arr, size);
    return 0;
}