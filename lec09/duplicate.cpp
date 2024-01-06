#include <iostream>
using namespace std;
int duplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (temp == arr[j])
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 7, 6, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << arr[duplicate(arr, size)];
    return 0;
}