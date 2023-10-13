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
    for (int i = 1; i < size; i++)
    {
        bool travel = 1;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                travel = 0;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (travel)
        {
            break;
        }
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