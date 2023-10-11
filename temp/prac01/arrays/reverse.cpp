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
void reverse(int arr[], int size)
{
    int s = 0, e = size - 1;
    while (e >= s)
    {
        swap(arr[s], arr[e]);
        e -= 1;
        s += 1;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    printArr(arr, size);
    return 0;
}